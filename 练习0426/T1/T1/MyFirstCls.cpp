#include "stdafx.h"
#include "MyFirstCls.h"

//��������������캯�������ʼ����ʱ����Զ�����
CMyFirstCls::CMyFirstCls()
{
	list = NULL;
	num = 0;
}

//���������������������������ʱ���Զ�����
CMyFirstCls::~CMyFirstCls()
{
	if (list)
	{
		delete[] list;
		list = NULL;
	}
}
//�������ʼ�����ڵ���������
//lst:��������
//n:�����С
int CMyFirstCls::SetLst(int * lst, long n)
{
	if (!lst || n < 1)
		return 0;
	if (list)  //���list�Ѿ����ڣ�����Ҫ��ɾ��
	{
		delete[] list;	//ɾ��
		list = NULL;	//����ֵ
	}
	//�ڴ����룬��ӦC���Ե�malloc
	list = new int[n];
	if (!list)  //�ڴ�����ʶʧ��
		return 0;
	memcpy(list, lst, sizeof(long)*n);
	/*//��memcpy�ȼ۵�����
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
	//���ʵ�ֺ���
	return 1;
}
int CMyFirstCls::Min(int * lMin)
{
	//���ʵ�ֺ���
	return 0;
}
