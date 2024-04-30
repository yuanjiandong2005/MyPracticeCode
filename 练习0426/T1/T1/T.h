#pragma once

//定义结构体数据类型
struct T_STRU
{
	int		Ti;
	double	Td;
	char	Tc[20];
};
//定义函数，参数为传值
void TestVal(int x, int y);
//定义函数，参数为传引用
void TestRef(int &x, int &y);
//定义函数，参数为传地址
void TestPnt(int *x, int *y);
//定义函数，参数为结构体
void TestStru(T_STRU *stru);
//定义函数，利用参数返回值
int MinNum(const int * T, long num, int * rt);
//定义函数，利用参数返回值
int Sum(const int * T, long num, int * rt);

