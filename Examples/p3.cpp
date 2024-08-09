#include<iostream>
using namespace std;
  class charseq {
    char x,y;
    public :
    charseq(char _x, char _y) : x(_x), y(_y) { }
    charseq(charseq &c) : x(c,x) , y(c,y){ }
    void change(charseq *new_c) { 
        this = new_c;
    }
    void show() {
        cout<< x <<" , " << y <<endl;
    }
  };
    int main(){
        charseq c1('a', 'c');
        charseq c2('o', 'k');
        charseq c3(c1);
        c3.change(&c2);
        c3.show();
        return 0;
        // this is show error 
}