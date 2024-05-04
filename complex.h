#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;

//复数 
class Complex{
public:
    float real;
    float imagine;
public:
    Complex(int a=0,int b=0){
		real=a;
		imagine=b;
			}
	~Complex(){
	}	
	virtual	void show(){
		cout<<real<<'+'<<imagine<<'i'<<endl; 
	}	
	virtual	double mod(){
		return (pow((pow(real,2)+pow(imagine,2)),1/2));
	}
	virtual	Complex inverse(){
		return Complex(real,-imagine);
	}
	 
	
	
};

Complex operator+(Complex a,Complex b){
	a.real=a.real+b.real;
	a.imagine=a.imagine+b.imagine;
	return a;
}

Complex operator-(Complex a,Complex b){
	a.real=a.real-b.real;
	a.imagine=a.imagine-b.imagine;
	return a;
}

Complex operator*(Complex a,Complex b){
	Complex c;
	c.real=a.real*b.real-a.imagine*b.imagine;
	c.imagine=a.real*b.imagine+b.real*a.imagine;
	return c;
}

Complex operator/(Complex a,Complex b){
	Complex c;
	c.real=(a.real*b.real+a.imagine*b.imagine)/(pow(b.mod(),2));
	c.imagine=(-a.real*b.imagine+b.real*a.imagine)/(pow(b.mod(),2));
	return c;
}


//四元数 
class Quternion:public Complex{
public:
	float j;
	float k;
public:
	Quternion(float a,float b,float c,float d){
		real=a;
		imagine=b;
		j=c;
		k=d;
	}
	~Quternion(){
	}
	//重载 
	void show() override{
		cout<<real<<'+'<<imagine<<'i'<<'+'<<j<<'j'<<'+'<<k<<'k'<<endl;
	} 
	
	double mod override(){
		double m=real*real+imagine*imagine+j*j+k*k;
		return (pow(m,1/2));
	}
	
	Quternion inverse override(){
		return Quternion(real,-imagine,-j,-k);
		
	}
};

Quternion operator+(Quternion a,Quternion b){
	a.real=a.real+b.real;
	a.imagine=a.imagine+b.imagine;
	a.j=a.j+b.j;
	a.k=a.k+b.k; 
	return a;
}

Quternion operator-(Quternion a,Quternion b){
	a.real-=b.real;
	a.imagine-=b.real;
	a.j-=b.j;
	a.k-=b.k;
	return a;
}

Quternion operator*(Quternion a,Quternion b){
	Quternion q(0,0,0,0);
	q.real=a.real*b.real-a.imagine*b.imagine-a.j*b.j-a.k*b.k;
	q.imagine=a.real*b.imagine+b.real*a.imagine-a.j*b.k+a.k*b.j;
	q.j=a.real*b.j+a.j*b.real-a.imagine*b.k+a.k*b.imagine;
	q.k=a.real*b.k+a.k*b.real+a.imagine*b.j-a.j*b.imagine;
	return q;
}


Quternion operator/(Quternion a,Quternion b){
	Quternion c(0,0,0,0);
	c=a*b.inverse();
	c.real/=b.mod();
	c.imagine/=b.mod();
	c.j/=b.mod();
	c.k/=b.mod();
	return c;
}

//矩阵 

class Matrix{
public:
	float* a;
	int m;
    int n;
public:
	
	Matrix(){
		a = new float[m][n];
		//a=(float*)malloc(m*n*sizeof(float)); 
	}
	
	~Matrix(){
		delete[] a;
		//free(a);
	} 
	
	float tree(){
		float t=0;
		for(int i=0;i<n;i++){
			t=t+a[i*i];
		}
		return t;
	}
	
};

//可自动增长的数组 
//pushback()











//向量
class Vector{
public:
	float *v;
	
public:
	Vector(){
		v=new float;
		
	}
	~Vector(){
		delete v;	
		
	}
};





















//张量tensor 

//
//
//


// 








