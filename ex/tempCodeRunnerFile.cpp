#include<iostream>
using namespace std;
class item {
static int count;
    // int number=0;
    public :
    void  setData(void){
        cout<<"2"<<count;
    }
    void get_data(void){
        // number =a;
        count++;
        // number++;
    }
    void getcount(void){
        cout<</*"number ="<<number<<endl<<*/"\tcount ="<<count;
    }
};
int main (){
    item a,b,c,d;
    cout<<" 1 \t";
    a.setData();
    a.get_data();
    b.get_data();
    c.get_data();
    d.get_data();

    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();

    cout<<" 2 \t";
    a.get_data();
    b.get_data();
    c.get_data();
    d.get_data();

    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
cout<<"ffsdfs";

    return 0;
    }











