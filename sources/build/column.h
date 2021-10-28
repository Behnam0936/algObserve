
#pragma once

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


