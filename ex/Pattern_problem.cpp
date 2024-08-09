#include<iostream>
using namespace std;

    int main(){
    int n=4;
    // Method 1
    // int row=1, col=1;
    // while(row<=n){
    //     for(int i=row; i<2*row; i++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    //     row= row+1; 
    // }
    // Method 2
    int row=1, col=1;
    while(row<=n){
        int i= row;
        while(i<2*row){
            cout<<i;
            i=i+1;
        }
        cout<<endl;
        row= row+1; 
    }
    return 0;
}