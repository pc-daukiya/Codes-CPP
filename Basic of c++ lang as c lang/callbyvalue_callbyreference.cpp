#include<iostream>
using namespace std;
int swap(int*a, int*b){
    int temp= *a;
    *a=*b;
    *b=temp;

}
    int main(){
     int x=4, y=5;
     cout<<"The value of x is "<<x<<endl<<"The value of y is"<<y<<endl;
     swap(&x,&y);
     cout<<"The value of x is "<<x<<endl<<"The value of y is"<<y<<endl;
    return 0;
}