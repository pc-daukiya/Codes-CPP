#include<iostream>
using namespace std;

    int main(){
    int a= 45; 
    int b=45.56;
    cout<<"a="<<float(a)<<endl;
    cout<<"a="<<(float)a<<endl;
    cout<<"b="<<int(b)<<endl;
    cout<<"b="<<(int)b<<endl;
     int c=int(b);
     cout<<"The expression is "<<a+b<<endl;
      cout<<"The expression is "<<a+int(b)<<endl;
       cout<<"The expression is "<<a+(int)b<<endl;

    return 0;
}