// bondini.cpp -- using escape sequences
#include <iostream>
#include <cfloat>
int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    //Unicode 字符编码
    int k\u00F6rper; // \u00F6
    cout << "Let them eat g\u00E2teau.\n"; // \u00E2
    cout << "k\u00F6rper\n";
    cout << "\n< char, unsigned char, wchar_t, char16_t, char32_t, bool >\n\n";
    char ch;// ch: -127~128
    unsigned char uch; // uch: 0-255
    wchar_t w_ch = L'P';
    char16_t ch16 = u'q';
    char32_t ch32 = U'\U0000222B';
    bool b_flag;

    cout << "sizeof(w_char_t) = " <<  sizeof(w_ch) << endl;
    cout << "sizeof(char16_t) = " << sizeof(ch16) << endl;
    cout << "sizeof(char32_t) = " << sizeof(ch32) << endl;
    cout << "sizeof(bool) = " << sizeof(b_flag) << endl << endl;

    wcout << "L\'P\' = " << w_ch << endl;
    printf("u\'q\' = \'%c\'\n", ch16);
    printf("U\'\\U0000222B\' = \'%c\'\n", ch32);
    cout << "bool default value is " << b_flag << endl;
    return 0;
}