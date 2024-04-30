#pragma once
class CMyFirstCls
{
protected:
	CMyFirstCls();
	~CMyFirstCls();
public:
	int *list;		//数组
	long num;		//数组大小
public:
	//从类外初始化类内的数组数据
	//lst:数组数据
	//n:数组大小
	int SetLst(int * lst, long n);
	//计算最大值 
	//lMax：返回最大值
	int Max(int *lMax);
	//计算最小值
	int Min(int *lMin);
	//计算数组个单元数据的和
	int Sum(int *lSum);
};
