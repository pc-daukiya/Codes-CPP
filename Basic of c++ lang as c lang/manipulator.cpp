#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 4, b = 34, c = 123;

    cout << "The value of a is ::" << setw(4) << a << endl;
    cout << "The value of b is ::" << setw(4) << b << endl;
    cout << "The value of c is ::" << setw(4) << c << endl;
    return 0;
}