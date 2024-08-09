#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);

}
    int main(){
    int a;
    cout<<"Enter number a";
    cin>>a;
    cout<<"the factorial of a = "<<a<<"is"<<endl<<factorial(a)<<endl;
    return 0;
}