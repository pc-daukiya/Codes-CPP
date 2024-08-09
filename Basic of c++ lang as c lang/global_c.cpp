#include <iostream>
using namespace std;
int c = 123; // Scope resoluction operator

int main()
{
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << "The sum is c : " << a + b << endl;
    cout << "Global c is " << ::c;

    return 0;
}