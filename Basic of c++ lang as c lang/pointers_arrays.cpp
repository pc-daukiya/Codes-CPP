#include<iostream>
using namespace std;

    int main(){
    int  marks[]={4,46,56,34};
    int* p;
    p =&marks[];
    //   (*P)  =30;
    //  *(P+1) =23;
    //   *(P+2)=124;
    //   *(P+3)=21;
      
    cout<<"The value of  marks "<<endl;
    // cout<<"The value of marks*(P) is"<<(*P) <<endl;
    cout<<"The value of marks*(P+1)"<<*(P+1) <<endl;
    cout<<"The value of marks*(P+2) "<<*(P+2) <<endl;
    cout<<"The value of marks *(P+3) " <<*(P+3)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p++)<<endl;
    return 0;
}