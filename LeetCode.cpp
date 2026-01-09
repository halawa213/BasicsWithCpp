#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;
int main()
{
    cout << std::numeric_limits<int32_t>::max() << std::endl;
    cout << "=================\n";
    cout << std::numeric_limits<int32_t>::min() << std::endl;
    return 0;
}