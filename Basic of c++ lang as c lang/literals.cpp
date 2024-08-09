#include<iostream>
using namespace std;

    int main(){
     float a =34.5F;
     long double b = 34.5L;
     cout<<"The value of a is "<<a<<endl<<"the value of b is "<< b <<endl;
     cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
     cout<<"The size of 34.5f is "<<sizeof(34.5f)<<endl;
     cout<<"The size of 34.5F is "<<sizeof(34.5F)<<endl;
     cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;
     cout<<"The size of 34.5L is "<<sizeof(34.5L)<<endl;
    return 0;
}
/* 
float 4 byte 
double 8 byte 
long double 12 byte  
*/