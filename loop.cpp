#include <iostream>
using namespace std;
int main()
{

  cout << "\n\n\n";

  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 29; j++)

    {
      if (i < 5) // الجزء الأول (i من 0 ل 4)
      {

        cout << "🟥";
      }
      else if (i < 10) // الجزء التاني (i من 5 ل 9)
      {

        if (i > 5 && i < 9 && j > 12 && j < 16) // رسم النسر ببلوك اصفر
        {
          cout << "🟨";
        }

        else
        {
          cout << "⬜";
        }
      }
      else if (i < 15) // الجزء التالت (i من 10 ل 14)
      {
        cout << "⬛";
      }
    }
    cout << "\n";
  }
  cout << "\n\n\n";
}
