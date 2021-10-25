#include <iostream>
#include <vector>
using namespace std;

class Column {
    private:
        int val;
        int pos;
        //int width=20;
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
};

class Columns {
    private:
        vector<Column> v;
    public:

        Columns(){ v = { }; }
        void addColumn(int val){
            try {
                if (val < 1) {
                    throw std::invalid_argument("The value of the column must be greater than 0");
                }
            }
            catch (std::invalid_argument& e) {
                cerr << e.what() << endl;
            }

            Column newCol;
            newCol.setVal(val);
            v.push_back(newCol);
        }

        int numberOfColumns() {
            return v.size();
        }

        Column* maxColumn() {
            if(numberOfColumns() == 0) {
                return NULL;
            }
            Column* max = &v[0];
            for(int i=0;static_cast<std::vector<int>::size_type>(i) < v.size();i++) {
                if( v[i].getVal() > max->getVal() ) max = &v[i];
            }
            return max;
        }

        Column* minColumn() {
            if(numberOfColumns() == 0) {
                return NULL;
            }
            Column* min = &v[0];
            for(int i=0;static_cast<std::vector<int>::size_type>(i) < v.size();i++) {
                if( v[i].getVal() < min->getVal() ) min = &v[i];
            }
            return min;
        }
};
