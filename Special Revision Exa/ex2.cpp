#include <iostream>
#include <cmath> // Include cmath for mathematical functions
using namespace std;

class calculator {
private:
    int i, j;
public:
    void get_data_calculator() {
        cout << "Enter first number i: ";
        cin >> i;
        cout << "Enter Second number j: ";
        cin >> j;
    }
    void function_of_calculator() {
        cout << "i+j = " << i + j << endl;
        cout << "i-j = " << i - j << endl;
        cout << "i*j = " << i * j << endl;
        cout << "i/j = " << i / j << endl;
        cout << "i%j = " << i % j << endl;
    }
};
class scientific{
    private:
    float a, b;
    public:
    void get_data_scientific(){
        cout <<"Enter Value of(in degree) a: ";
        cin >> a;
        cout <<"Enter Value of(in degree) b: ";
        cin >> b;
    }
    void function_of_scientific(){
        cout << "sin(a) = " << sin(a) << endl;
        cout << "cos(b) = " << cos(b) << endl;  
        cout << "tan(b) = " << tan(b) << endl;  
    }
};
class complete_calculator : public calculator, public scientific{

};
int main() {
    complete_calculator a;
    cout << "Enter value for calculation: ";
    a.get_data_calculator();
    a.function_of_calculator();
    cout << "Enter value for scientific calculation: ";
    a.get_data_scientific();
    a.function_of_scientific();
    return 0;
}