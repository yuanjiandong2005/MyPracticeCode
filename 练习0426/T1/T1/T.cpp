
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "T.h"
using namespace std;
//////////////////////////////////////////////////////
//以下为测试代码
#include <stdlib.h>
//传值
void TestVal(int x, int y)
{
	//printf("|传  值| 变量x的内存地址 |变量x的值| 变量y的内存地址 |变量y的值|\n");
	cout << "|传  值| 变量x的内存地址 |变量x的值| 变量y的内存地址 |变量y的值|" << endl;
	//printf("----------------------------------------------------------------\n");
	cout << "----------------------------------------------------------------" << endl;
	//printf("|      |     %p    |    %d    |     %p    |    %d    |\n", &x, x, &y, y);
	cout << "|" << setw(6) << " " << "|" << setw(17) << &x << "|" << setw(9) << x << "|" << setw(17) << &y << "|" << setw(9) << y << "|" << endl;
	//printf("----------------------------------------------------------------\n");
	cout << "----------------------------------------------------------------" << endl;
}
//传引用
void TestRef(int &x, int &y)
{
	printf("|传引用| 变量x的内存地址 |变量x的值| 变量y的内存地址 |变量y的值|\n");
	printf("----------------------------------------------------------------\n");
	printf("|      |     %p    |    %d    |     %p    |    %d    |\n", &x, x, &y, y);
	printf("----------------------------------------------------------------\n");
}
//传地址
void TestPnt(int *x, int *y)
{
	printf("|传地址| 变量x的内存地址 |变量x的值| 变量y的内存地址 |变量y的值|\n");
	printf("----------------------------------------------------------------\n");
	printf("|      |     %p    |    %d    |     %p    |    %d    |\n", x, *x, y, *y);
	printf("----------------------------------------------------------------\n");
}
//
void TestStru(T_STRU *stru)
{
	T_STRU T;
	T.Td = stru->Td;
	T.Ti = stru->Ti;
	strcpy_s(T.Tc, stru->Tc); //不能直接用“=”赋值
}
//求最大
int MaxNum(const int * T, long num, int * rt)
{
	if (!T || num < 1 || !rt)
		return 0;
	*rt = T[0];
	for (long i = 1; i < num; i++)
	{
		if (T[i] < *rt)
			continue ;
		*rt = T[i];
	}
	return 1;
}
//求最小
int MinNum(const int * T, long num, int * rt)
{
	if (!T || num < 1 || !rt)
		return 0;
	*rt = T[0];
	for (long i = 1; i < num; i++)
	{
		if (T[i] > *rt)
			continue;
		*rt = T[i];
	}
	return 1;
}
//求和
int SumNum(const int * T, long num, int * rt)
{
	if (!T || num < 1 || !rt)
		return 0;
	*rt = T[0];
	for (int i = 1; i < num; i++)
	{
		*rt = *rt + T[i];
	}
	return *rt;
}