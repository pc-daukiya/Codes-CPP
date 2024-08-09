#include<iostream>
using namespace std;
typedef struct employee {
    int eid;
    char favchar;
    float salary ;
}ep;
    int main(){
    struct employee prakash ;
    prakash.eid=1;
    prakash.favchar ='d';
    prakash.salary = 1000000;
    cout<<"the eid is "<<prakash.eid<<endl;
    cout<<"the favchar is "<<prakash.favchar<<endl; 
    cout<<"the salary is "<<prakash.salary<<endl;
    return 0;
}