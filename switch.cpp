#include <iostream>
using namespace std;
int main()
{

    cout << "#################\n";
    cout << "#MINI CALCULATOR#\n";
    cout << "#################\n\n";
    int x, y;
    char z;
    cout << "enter num1: ";
    cin >> x;
    cout << "enter num2: ";
    cin >> y;

    cout << " + \n";
    cout << " - \n";
    cout << " * \n";
    cout << " / \n";
    cout << "choose the operation from above ";
    cin >> z;
    cout << endl;

    switch (z)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y << " \n";
        break;

    case '-':
        cout << x << " - " << y << " = " << x - y << " \n";
        break;

    case '*':
        cout << x << " * " << y << " = " << x * y << " \n";
        break;

    case '/':
        cout << x << " / " << y << " = " << float(x) / y << " \n";
        break;
    default:
        cout << "undefined operation!! \n";
        cout << "----------------------------------------------------------------------------\n\n";
    }
}
