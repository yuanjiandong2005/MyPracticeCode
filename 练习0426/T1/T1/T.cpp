
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "T.h"
using namespace std;
//////////////////////////////////////////////////////
//����Ϊ���Դ���
#include <stdlib.h>
//��ֵ
void TestVal(int x, int y)
{
	//printf("|��  ֵ| ����x���ڴ��ַ |����x��ֵ| ����y���ڴ��ַ |����y��ֵ|\n");
	cout << "|��  ֵ| ����x���ڴ��ַ |����x��ֵ| ����y���ڴ��ַ |����y��ֵ|" << endl;
	//printf("----------------------------------------------------------------\n");
	cout << "----------------------------------------------------------------" << endl;
	//printf("|      |     %p    |    %d    |     %p    |    %d    |\n", &x, x, &y, y);
	cout << "|" << setw(6) << " " << "|" << setw(17) << &x << "|" << setw(9) << x << "|" << setw(17) << &y << "|" << setw(9) << y << "|" << endl;
	//printf("----------------------------------------------------------------\n");
	cout << "----------------------------------------------------------------" << endl;
}
//������
void TestRef(int &x, int &y)
{
	printf("|������| ����x���ڴ��ַ |����x��ֵ| ����y���ڴ��ַ |����y��ֵ|\n");
	printf("----------------------------------------------------------------\n");
	printf("|      |     %p    |    %d    |     %p    |    %d    |\n", &x, x, &y, y);
	printf("----------------------------------------------------------------\n");
}
//����ַ
void TestPnt(int *x, int *y)
{
	printf("|����ַ| ����x���ڴ��ַ |����x��ֵ| ����y���ڴ��ַ |����y��ֵ|\n");
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
	strcpy_s(T.Tc, stru->Tc); //����ֱ���á�=����ֵ
}
//�����
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
//����С
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
//���
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