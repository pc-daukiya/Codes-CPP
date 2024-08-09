#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check_bin(void);
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}
void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << endl<<"Dis playing your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.check_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}