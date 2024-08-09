#include<iostream>
using namespace std;

    int main(){
        int a = 1;
        int b = 2;

        if(a-- > 0 || ++b > 2){
            cout << "Stage1"<< endl;
        }
        else{
            cout << "Stage2"<< endl;
        }
        cout<< a << " " << b << endl;
    return 0;
}