#include <iostream>
using namespace std;
int main()
{
    int age;
    int pts;
    cout << "your age ? ";
    cin >> age;
    if (age < 18)
    {
        cout << "rejected ❌\n";
      return 0;
    }
    cout << "your points? ";
    cin >> pts;
    if (age >= 18)
    {
        cout << "accepted ✅\n";
        if (pts >= 100)
        {
            cout << "you're VIP 🤩\n";
        }
    }
    else
    {
        cout << "rejected ❌\n";
    }

    return 0;
}