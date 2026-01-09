#include <iostream>
using namespace std;

// 1. الدالة بتستقبل مؤشرات (Pointers) يعني عناوين في الذاكرة
void swap(int* ptr1, int* ptr2)
{
  // *ptr1 معناها: هات القيمة اللي موجودة داخل العنوان ده (Dereferencing)
  int temp = *ptr1; 
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main()
{
  // لازم نعرف متغيرات عشان نقدر نبعت عنوانها
  int a = 4;
  int b = 12;

  cout << "Before: " << a << "," << b << endl;

  // 2. بنبعت عنوان المتغيرات باستخدام علامة &
  swap(&a, &b);

  // هنا هنطبع القيم من الـ main عشان نتأكد إن التبديل حصل فعلاً في الذاكرة الأصلية
  cout << "After: " << a << "," << b << endl;
}