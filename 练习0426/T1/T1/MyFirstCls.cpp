#include "stdafx.h"
#include "MyFirstCls.h"

//这个函数叫做构造函数，类初始化的时候会自动调用
CMyFirstCls::CMyFirstCls()
{
	list = NULL;
	num = 0;
}

//这个函数叫做析构函数，类销毁时会自动调用
CMyFirstCls::~CMyFirstCls()
{
	if (list)
	{
		delete[] list;
		list = NULL;
	}
}
//从类外初始化类内的数组数据
//lst:数组数据
//n:数组大小
int CMyFirstCls::SetLst(int * lst, long n)
{
	if (!lst || n < 1)
		return 0;
	if (list)  //如果list已经存在，这需要先删除
	{
		delete[] list;	//删除
		list = NULL;	//赋空值
	}
	//内存申请，对应C语言的malloc
	list = new int[n];
	if (!list)  //内存申请识失败
		return 0;
	memcpy(list, lst, sizeof(long)*n);
	/*//与memcpy等价的做法
	for(long i = 0;i<num;i++)
	{
		list  = lst[i];
	}
	*/
	num = n;
	return 1;
}
int CMyFirstCls::Sum(int *lSum)
{
	if (!list || num < 1 || !lSum)
		return 0;
	*lSum = list[0];
	for (int i = 1; i < num; i++)
	{
		*lSum = *lSum + list[i];
	}
	return 1;
}
int CMyFirstCls::Max(int * lMax)
{
	//添加实现函数
	return 1;
}
int CMyFirstCls::Min(int * lMin)
{
	//添加实现函数
	return 0;
}
