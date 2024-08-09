#include<iostream>
using namespace std;
   class line {
    int _sp;
    int _ep;
    line(int x,int y){
        _sp = x;
        _ep = y;
        cout<< _sp << " " << _ep;
    }
   };
    int main(){
        line l(1 ,9);
    return 0;
} 