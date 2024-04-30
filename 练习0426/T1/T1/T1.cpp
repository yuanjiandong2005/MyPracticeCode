// T1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>			//包含输入输出头文件，是C++的库文件
#include <iomanip>
#include "T.h"				//包含结构体、函数定义头文件
#include "MyFirstCls.h"		//包含类定义头文件

using namespace std;

//引入库文件,加载动态库
#include <TDll.h>					//包含定位头件
#pragma comment(lib,"TDll.lib")		//导入库文件





int _tmain(int argc, _TCHAR* argv[])
{
	/*
	int a = 1, b = 2;
	printf("----------------------------------------------------------------\n");
	printf("|主函数| 变量a的内存地址 |变量a的值| 变量b的内存地址 |变量b的值|\n");
	printf("----------------------------------------------------------------\n");
	printf("|      |     %p    |    %d    |     %p    |    %d    |\n", &a, a, &b, b);
	printf("----------------------------------------------------------------\n");
	//测试传值、传引用、传指针
	TestVal(a, b);		//注意:printf被替换成了cout,cout是C++的内置库函数，用于输出，是一个对象
	TestRef(a, b);
	TestPnt(&a, &b);
	//测试结构体
	T_STRU T;
	T.Ti = 0;
	T.Td = 0;
	T.Tc[0] = 0;
	TestStru(&T);
	//测试类实现与函数实现的区别
	int list[7], rt;

	list[0] = 1;
	list[1] = 3;
	list[2] = 5;
	list[3] = 7;
	list[4] = 2;
	list[5] = 4;
	list[6] = 6;

	//练习cin
	cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4] >> list[5] >> list[6];
	
	//定义一个类对象，类中有数据和对数据的操作方法
	CMyFirstCls fc;
	//初始化类中的数据
	fc.SetLst(list, 7);
	//调用类中的方法（函数）做操作
	fc.Sum(&rt);
	//C++输出方法
	cout << "采用类计算的数组数据的和为：" << rt << endl;
	
	//C语言的函数调用
	MinNum(list, 7, &rt);
	//C++输出方法
	cout << "采用C函数计算的数组最小值为：" << rt << endl;
	
	//测试动态库导出API函数
	dll_max(list, 7, &rt);

	//测试动态库导出类
	CExpClass exc;
	exc.SetLst(list,7);
	exc.Max(&rt);
	//测试从类中取数组数据
	int *lst = NULL;
	long n = 0;
	exc.GetLst(&lst,&n);
	*/

	//定义一个空间对象：注意实现在动态库中
	CMyFeature f,*bk;
	GEO_PNT pnt,*bkpt;	//坐标信息
	pnt.x = 1;
	pnt.y = 1;
	f.AddPnt(&pnt);		//第一个坐标
	pnt.x = 1;
	pnt.y = 2;
	f.AddPnt(&pnt);		//第个坐标
	GEO_ATT att,*bkatt;	//属性信息
	strcpy_s(att.name, "类别");
	strcpy_s(att.value, "线");
	f.AddAtt(&att);
	strcpy_s(att.name, "颜色");
	strcpy_s(att.value, "红色");
	f.AddAtt(&att);

	long tnum, anum;
	f.Get(&bkpt, &tnum, &bkatt, &anum);

	CMyFeatureClass fc;
	long num,id;
	fc.Add(&f,&id);	//添加第一个要素
	fc.Add(&f,&id);	//添加第二个要素
	fc.Get(&bk, &num);
	system("pause");
	return 0;

}

