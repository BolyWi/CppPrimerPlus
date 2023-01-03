// showpt.cpp -- setting the precision, show trailing point
#include <iostream>

int main()
{
    using std::cout;
    using std::ios_base;
    // float price1 = 20.40;
    // float price2 = 1.9 + 8.0 / 9.0;

    // cout.setf(ios_base::showpoint);
    // cout << "\"Furry Friends\" is $" << price1 << "!\n";
    // cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    // cout.precision(2);
    // cout << "\"Furry Friends\" is $" << price1 << "!\n";
    // cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    // bool flag = true;
    int x = 0xff;
    // cout << flag << '\n';
    // cout.setf(ios_base::boolalpha);
    // cout << flag << '\n';
    cout << x << '\n';
    hex(cout);
    cout.setf(ios_base::showbase);
    cout << x << '\n';
    return 0;
}