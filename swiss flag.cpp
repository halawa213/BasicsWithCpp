#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n\n";                           //علم سويسرا 

    int height = 13; // ارتفاع العلم
    int width = 17;  // عرض العلم

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            bool isVerticalBar = (j >= 7 && j <= 9) && (i >= 3 && i <= 9);
                //الصليب الابيض 
            bool isHorizontalBar = (i >= 5 && i <= 7) && (j >= 4 && j <= 12);

            if (isVerticalBar || isHorizontalBar)
            {
                cout << "⬜";
            }
            else
            {
                cout << "🟥";
            }
        }
        cout << "\n";
    }

    cout << "\n\n\n";
}