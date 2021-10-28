#include <iostream>
#include <vector>
using namespace std;

//representation of one column with a value between 1 and 100
class Column {
    private:
        int val;
        int pos;
        //int width=10;
        int height=0;
    public:

        Column() { val=0; pos=0; }

        Column(int v) {
            val=v;pos=0;height=v;
        }

        Column(int v,int p) {
            val=v;pos=p;height=v;
        }

        int getVal() { return val; }

        void setVal(int v) {
            val = v;height=v;
        }
        int getPos() { return pos; }
        void setPos(int position) {
            this->pos = position;
        }

};

//a set of columns with values between 1 and 100
class Columns {
    private:
        vector<Column> v;
    public:

        Columns(){ v = { }; }

        //delete all columns
        void delColumns() {
            v = {};
        }

        //adds a Column to the vector of columns
        void addColumn(int val){
            //try {
                if (val < 1 || val > 100) {
                    throw std::invalid_argument("The value of the column must be between 1 and 100");
                }
                else{
                    Column newCol;
                    newCol.setVal(val);
                    v.push_back(newCol);
                    newCol.setPos((int)v.size());
                    cerr << newCol.getPos() << endl;
                }
            //}
            //catch (std::invalid_argument& e) {
            //    cerr << e.what() << endl;
            //}


        }

        //returns the number of columns
        int numberOfColumns() {
            return v.size();
        }

        //returns the n-th Column's value
        int nthColumnVal(int n) {
            if(n < 0 || n > (numberOfColumns()-1) ) {
                return -1;
            }

            return v[n].getVal();
        }

        //returns the value of the highest value Column
        int maxColumn() {
            if(numberOfColumns() == 0) {
                return -1;
            }
            int max = v[0].getVal();
            for(int i=0;static_cast<std::vector<int>::size_type>(i) < v.size();i++) {
                if( v[i].getVal() > max ) max = v[i].getVal();
            }
            return max;
        }

        //returns the value of the lowest value Column
        int minColumn() {
            if(numberOfColumns() == 0) {
                return -1;
            }
            int min = v[0].getVal();
            for(int i=0;static_cast<std::vector<int>::size_type>(i) < v.size();i++) {
                if( v[i].getVal() < min ) min = v[i].getVal();
            }
            return min;
        }
};
