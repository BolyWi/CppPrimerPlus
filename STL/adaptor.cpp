/*
 * @Author: zzls-cool zzls-cool@foxmail.com
 * @Date: 2025-04-30 17:15:41
 * @LastEditors: zzls-cool zzls-cool@foxmail.com
 * @LastEditTime: 2025-05-06 17:44:30
 * @FilePath: \CppPrimerPlus\STL\adaptor.cpp
 * @Description: 
 * 
 * Copyright (c) 2025 by ${zzls-cool@foxmail.com}, All Rights Reserved. 
 */
#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char** argv)
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    cout << stk.size() << endl;
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.size() << endl;
    return 0;
}