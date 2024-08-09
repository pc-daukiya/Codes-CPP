#include<iostream>
using namespace std;

    int main(){
     
        int n;
        cin>>n;

        for(int i= n; i>=1; i--){
            for(int j= 1; j<=i; j++){
                cout<<j;
            }
            int star1 ;
            for(star1= 0; star1 <2*(n-i) ;star1++){
                cout<<"*";
            }
           
             for(int j= i; j>=1; j--){
                cout<<j;
            }
            cout<<endl;
        }  
    return 0;
}