#include <iostream>
using namespace std;
int main()
{
  while (true)
  {

    cout << "\n";

    int numbers[] = {4, 13, 21, 44, 12, 30, 48, 55, 66, 72, 83, 91};
    int count = size(numbers);
    int myValue;
    cout << "\n\n";
    cout << " TRY TO GUESS THE NUMBER THAT IN MY MIND (from 1 to 100): ";
    cin >> myValue;

    bool found = false;
    for (int i = 0; i < count; ++i)
    {
      if (numbers[i] == myValue)
      {
        found = true;
        break;
      }
    }
    if (found)
    {
      cout << " ➖➖➖➖➖➖➖➖➖➖\n";
      cout << "Congrates, you won 🙌🎉 " << endl;
      cout << " ➖➖➖➖➖➖➖➖➖➖\n\n";
    }
    else
    {

      cout << "➖➖➖➖➖➖➖➖➖➖\n";
      cout << "Unfortunatly, you lost 😓\n";
      cout << "➖➖➖➖➖➖➖➖➖➖\n\n";
      char x;
      cout << "do you want to try again? [y/n] ";
      cin >> x;
      if (x != 'y')
      {

        break;
      }
    }
  }
}
