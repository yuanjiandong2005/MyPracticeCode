// T1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>			//�����������ͷ�ļ�����C++�Ŀ��ļ�
#include <iomanip>
#include "T.h"				//�����ṹ�塢��������ͷ�ļ�
#include "MyFirstCls.h"		//�����ඨ��ͷ�ļ�

using namespace std;

//������ļ�,���ض�̬��
#include <TDll.h>					//������λͷ��
#pragma comment(lib,"TDll.lib")		//������ļ�





int _tmain(int argc, _TCHAR* argv[])
{
	/*
	int a = 1, b = 2;
	printf("----------------------------------------------------------------\n");
	printf("|������| ����a���ڴ��ַ |����a��ֵ| ����b���ڴ��ַ |����b��ֵ|\n");
	printf("----------------------------------------------------------------\n");
	printf("|      |     %p    |    %d    |     %p    |    %d    |\n", &a, a, &b, b);
	printf("----------------------------------------------------------------\n");
	//���Դ�ֵ�������á���ָ��
	TestVal(a, b);		//ע��:printf���滻����cout,cout��C++�����ÿ⺯���������������һ������
	TestRef(a, b);
	TestPnt(&a, &b);
	//���Խṹ��
	T_STRU T;
	T.Ti = 0;
	T.Td = 0;
	T.Tc[0] = 0;
	TestStru(&T);
	//������ʵ���뺯��ʵ�ֵ�����
	int list[7], rt;

	list[0] = 1;
	list[1] = 3;
	list[2] = 5;
	list[3] = 7;
	list[4] = 2;
	list[5] = 4;
	list[6] = 6;

	//��ϰcin
	cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4] >> list[5] >> list[6];
	
	//����һ����������������ݺͶ����ݵĲ�������
	CMyFirstCls fc;
	//��ʼ�����е�����
	fc.SetLst(list, 7);
	//�������еķ�����������������
	fc.Sum(&rt);
	//C++�������
	cout << "�����������������ݵĺ�Ϊ��" << rt << endl;
	
	//C���Եĺ�������
	MinNum(list, 7, &rt);
	//C++�������
	cout << "����C���������������СֵΪ��" << rt << endl;
	
	//���Զ�̬�⵼��API����
	dll_max(list, 7, &rt);

	//���Զ�̬�⵼����
	CExpClass exc;
	exc.SetLst(list,7);
	exc.Max(&rt);
	//���Դ�����ȡ��������
	int *lst = NULL;
	long n = 0;
	exc.GetLst(&lst,&n);
	*/

	//����һ���ռ����ע��ʵ���ڶ�̬����
	CMyFeature f,*bk;
	GEO_PNT pnt,*bkpt;	//������Ϣ
	pnt.x = 1;
	pnt.y = 1;
	f.AddPnt(&pnt);		//��һ������
	pnt.x = 1;
	pnt.y = 2;
	f.AddPnt(&pnt);		//�ڸ�����
	GEO_ATT att,*bkatt;	//������Ϣ
	strcpy_s(att.name, "���");
	strcpy_s(att.value, "��");
	f.AddAtt(&att);
	strcpy_s(att.name, "��ɫ");
	strcpy_s(att.value, "��ɫ");
	f.AddAtt(&att);

	long tnum, anum;
	f.Get(&bkpt, &tnum, &bkatt, &anum);

	CMyFeatureClass fc;
	long num,id;
	fc.Add(&f,&id);	//��ӵ�һ��Ҫ��
	fc.Add(&f,&id);	//��ӵڶ���Ҫ��
	fc.Get(&bk, &num);
	system("pause");
	return 0;

}

