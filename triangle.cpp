#include <iostream>
using namespace std;
void sizeOFtriangle(int count)
{

  for (int i = 0; i < count; i++)
  {
    for (int j = count; j > -1; j--)
    {
      if (j > i)
      {
        cout << " ";
      }
      else
      {
        cout << "🔺";
      }
    }
    cout << endl;
  }
}

int main()
{
  sizeOFtriangle(25);
}