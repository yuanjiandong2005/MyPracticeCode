#pragma once

//����ṹ����������
struct T_STRU
{
	int		Ti;
	double	Td;
	char	Tc[20];
};
//���庯��������Ϊ��ֵ
void TestVal(int x, int y);
//���庯��������Ϊ������
void TestRef(int &x, int &y);
//���庯��������Ϊ����ַ
void TestPnt(int *x, int *y);
//���庯��������Ϊ�ṹ��
void TestStru(T_STRU *stru);
//���庯�������ò�������ֵ
int MinNum(const int * T, long num, int * rt);
//���庯�������ò�������ֵ
int Sum(const int * T, long num, int * rt);

