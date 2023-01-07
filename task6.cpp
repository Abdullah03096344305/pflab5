#include <iostream>
using namespace std;

int main()
{
    int num1, a, b;

    cout << "enter a two digit number between 1 to 99";
    cout << "( !! except 11-19)" << endl;
    cin >> num1;

    a = num1 % 10;
    b = num1 / 10;

    if (b == 1)
    {
        cout << "ten ";
    }
    if (b == 2)
    {
        cout << "twenty ";
    }
    if (b == 3)
    {
        cout << "thirty ";
    }
    if (b == 4)
    {
        cout << "fourty ";
    }
    if (b == 5)
    {
        cout << "fifty ";
    }
    if (b == 6)
    {
        cout << "sixty ";
    }
    if (b == 7)
    {
        cout << "seventy ";
    }
    if (b == 8)
    {
        cout << "eighty ";
    }

    if (b == 9)
    {
        cout << "ninty ";
    }

    if (a == 1)
    {
        cout << " one";
    }
    if (a == 2)
    {
        cout << " two";
    }
    if (a == 3)
    {
        cout << " three";
    }
    if (a == 4)
    {
        cout << " four";
    }
    if (a == 5)
    {
        cout << " five";
    }
    if (a == 6)
    {
        cout << " six";
    }
    if (a == 7)
    {
        cout << " seven";
    }
    if (a == 8)
    {
        cout << " eight";
    }
    if (a == 9)
    {
        cout << " nine";
    }

    return 0;
}