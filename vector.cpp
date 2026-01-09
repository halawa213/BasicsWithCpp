#include <iostream>
#include <vector>
using namespace std;
void sumvector(vector<int> sumnum);
int main()

{
   vector<int> nums(4);

   cout << "enter values of the vector: \n";
   for (int &i :nums)
   {
      cin >>i;
   }
     

   cout << "==================\n";
   cout << "sum of numbers is: "; 
   sumvector(nums);
   cout << "\n==================\n";


}

void sumvector(vector<int> sumnum)
{
   int counter = 0;
   for (int &j: sumnum)

   {
      counter += j;
   }
  cout<<counter;
}