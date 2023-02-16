#include <iostream>
#include "main.h"
using namespace std;
int main()
{
    Array<int> arr(10);
    arr.Set(1, 10);
    cout << arr.Get(100);
    return 0;
}