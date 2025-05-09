/*
 * @Author: zzls-cool zzls-cool@foxmail.com
 * @Date: 2025-05-07 15:10:10
 * @LastEditors: zzls-cool zzls-cool@foxmail.com
 * @LastEditTime: 2025-05-08 18:30:17
 * @FilePath: \CppPrimerPlus\STL\io_demo.cpp
 * @Description: 
 * 
 * Copyright (c) 2025 by ${zzls-cool@foxmail.com}, All Rights Reserved. 
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void os_demo()
{
    cin.rdstate();
    cin.clear();

    cout << "hi" << endl;
    cout << "hi" << flush;
    cout << "hi" << ends;

    cout << unitbuf;
    cout << nounitbuf;    
}


int main()
{
    string *str =
    printf("%s", str[1].c_str());
    return 0;
}
