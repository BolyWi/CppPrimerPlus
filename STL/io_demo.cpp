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
#include <pthread.h>
#include <unistd.h>
#include <time.h>

using namespace std;
void file_op(string file_name, string content)
{
    fstream file;
    file.open(file_name, fstream::app);
    file.write(content.c_str(), content.length());
	cout << content;
	file.close();
}

void* update_time(void* task)
{
    char buf[32] = {0};
    char file_name[64] = { 0 };
    time_t seed = 0, old_seed = -1;
    while(1)
    {
        time(&seed);
        if(seed!= old_seed)
        {
            old_seed = seed;
            struct tm* now_time = localtime(&seed);
            strftime(file_name, sizeof(file_name), "log_20%y-%m-%d.txt", now_time);
            strftime(buf, sizeof(buf), "20%y-%m-%d_%H:%M:%S\n", now_time);
            file_op(string(file_name), string(buf));
        }
        usleep(1000*100);
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
    pthread_create(&colck_task, NULL, update_time, NULL);
	pthread_create(&colck_task, NULL, update_time, NULL);
	while(1)
    {
        usleep(1000*10);
    }
    return 0;
}
