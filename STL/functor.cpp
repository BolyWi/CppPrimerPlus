/*
 * @Author: zzls-cool zzls-cool@foxmail.com
 * @Date: 2025-04-29 15:24:54
 * @LastEditors: zzls-cool zzls-cool@foxmail.com
 * @LastEditTime: 2025-05-06 17:47:44
 * @FilePath: \CppPrimerPlus\STL\functor.cpp
 * @Description: 
 * 
 * Copyright (c) 2025 by ${zzls-cool@foxmail.com}, All Rights Reserved. 
 */
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>

using namespace std;

template <typename T>
class display
{
public:
    void operator()(const T &x)
    {
        cout << x << " ";
    }
};

int main(int argc, char** argv)
{
    int ia[] = {1,2,3,4,5};
    for_each(ia, ia+5, display<int>());

    vector<int> iv(ia, ia+5);
    cout << accumulate(iv.begin(), iv.end(), 1, multiplies<int>()) << endl;

    cout << multiplies<int>()(3, 5) << endl;

    modulus<int> modulusObj;
    cout << modulusObj(3, 5) << endl;

    return 0;
}