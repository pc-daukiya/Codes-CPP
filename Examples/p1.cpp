#include<iostream>
using namespace std;
   class check{
    public:
    check()
    {
        cout<<"Default"<<endl;
    }
    check(int x=0)
    {
        cout <<"Parameterized"<<endl;
    }
   };
    int main(){
        check m1;
    return 0;
} 