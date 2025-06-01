/*
 * @Author: zzls-cool zzls-cool@foxmail.com
 * @Date: 2025-05-07 15:10:10
 * @LastEditors: BolyWi@company zzls-cool@foxmail.com
 * @LastEditTime: 2025-05-13 11:49:46
 * @FilePath: \CppPrimerPlus\STL\io_demo.cpp
 * @Description:
 *
 * Copyright (c) 2025 by ${zzls-cool@foxmail.com}, All Rights Reserved.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

using namespace std;

// fstream::out // write content
// fstream::in //  read content
// fstream::app // append content

void file_op(string file_name, string content)
{
    fstream file;
    file.open(file_name, fstream::app);
    file.write(content.c_str(), content.length());
    cout << content;
    file.close();
}

string print_buf()
{
    static string buf;
    getline(cin, buf);
    return buf;
}

void *update_time(void *task)
{
    char time_str[128] = {0};
    string content((char *)task);
    time_t seed = 0, old_seed = -1;
    while (1)
    {
        time(&seed);
        if (seed != old_seed)
        {
            old_seed = seed;
            struct tm *now_time = localtime(&seed);
            strftime(time_str, sizeof(time_str), "20%y-%m-%d %H:%M:%S", now_time);
            string file_name(".txt");
            file_op(file_name, string(time_str + content + '\n'));
        }
        usleep(1000 * 200);
    }
}

void io_op()
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
    pthread_t colck_task;
    char buf[64] = {0};
    pthread_create(&colck_task, NULL, update_time, (void *)buf);
    while (1)
    {
        usleep(1000 * 100);
    }
    return 0;
}
