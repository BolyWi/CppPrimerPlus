// stock00.h -- Stock class interface
// version 00
// Created by zzls-cool

#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>
// 股票类
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; } // 内联函数
    // 等同于在类定义中
    // inline void Stock::set_tot()
    // {
    //      total_val = shares * share_val;
    // }
public:
	void acquire(const std::string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);	
	void show();
};

#endif
