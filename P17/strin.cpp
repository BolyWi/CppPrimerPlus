// strin.cpp -- formatted reading from a char array
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string *str = new string("hello");
    int *x = (int*)str->c_str();
    string c = str->c_str();
    cout << c << endl;
    cout << x;
    return 0;
}