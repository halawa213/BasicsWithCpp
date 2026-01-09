#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
  
//     //math functions
//  cout<<pow(2,3)<<endl;              // الاوس
//  cout<<fmod(12.5,2)<<endl;          // باقي القسمة
//  cout<<ceil(9.8)<<endl;
//  cout<<floor(9.8)<<endl;
//  cout<<round(9.4)<<endl;
//  cout<<round(9.6)<<endl;
//  cout<<trunc(9.4)<<endl;
//  cout<<trunc(9.6)<<endl;
//  cout<<abs(-9.6)<<endl;             //القيمة المطلقة
//   cout<<sqrt(12)<<endl<<endl;    //الجذر التربيعي

// cout<<"=====================================\n\n";

// string name;
// cout<<"type your name: ";cin>>name;
// int count=size(name);
// for(int i=0;i<count;i++)
//  {
//     if(isupper(name[i]))
//     {
//         cout<<char(tolower(name[i]));
//     }
//     else
//     {
//        cout<<char(toupper(name[i]));

//    }


//  }


//   int nums[]={10,23,22,12,-13,-2,-3};
//   int count=size(nums);
//   int checkmin=0;
//   for(int i =0;i<count;i++)
//    {

//      if(nums[i] < checkmin )
//      {
//       checkmin = nums[i];

//      }


//    }

//    cout<<"maxnum = "<<checkmin;

//    }

  int nums[] = {12, 1, 1, 13, 12, 14, 1, 2};
  int count = size(nums);
  int counter = 0;
  int chosen = 2;
  for (int i = 0; i < count; i++)
  {
    if (nums[i] == chosen)
    {
      counter++;
    }
  }

  cout << "the chosen number is found (" << counter << ") times." << endl;
  cout<<ceil(2025/float (100));
}

