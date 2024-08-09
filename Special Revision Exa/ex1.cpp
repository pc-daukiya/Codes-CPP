#include<iostream>
using namespace std;
   class Animal{                
    public: 
    void branch(){
        cout<<"It`s Animal"<<endl;
    }
    void pet(){
        cout<<"It is pet animal\n";
    }
    };
    class Dog: public Animal{
        public:
        void bark(){
            cout<<"Dog is Barking"<<endl;
        }
    };                
    class Cow: public Animal{
        public:
        void milk(){
            cout<<"Cow Gives us milk"<<endl;
        }
    };   
    class Lion: public Animal{
        public:
        int a;
        void dangerous(){
            cout<<"Lion is dangerous for us"<<endl;
        }
        void area(){
            cout<<"Area a(km) is: ";
            cin>>a;
            if(a>5){
                cout<<"Safe area for us~"<<endl;
            }
            else if (a<=5){
                cout<<"This zone is dangerous!!"<<endl;
            }
            else{
                cout<<"Please, Enter Valid Area__"<<endl;
            }
        }

    };

    int main(){
     Dog Mydog;
     Mydog.branch();
     Mydog.bark();
     Mydog.pet();
     Cow Mycow;
     Mycow.branch();
     Mycow.milk();
     Mycow.pet();
     Lion Dlion;
     Dlion.branch();
     Dlion.dangerous();
     Dlion.area();


    return 0;
}