#pragma once
class CMyFirstCls
{
protected:
	CMyFirstCls();
	~CMyFirstCls();
public:
	int *list;		//����
	long num;		//�����С
public:
	//�������ʼ�����ڵ���������
	//lst:��������
	//n:�����С
	int SetLst(int * lst, long n);
	//�������ֵ 
	//lMax���������ֵ
	int Max(int *lMax);
	//������Сֵ
	int Min(int *lMin);
	//�����������Ԫ���ݵĺ�
	int Sum(int *lSum);
};
