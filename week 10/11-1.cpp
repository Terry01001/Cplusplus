#include<iostream>
using namespace std;

int main(){
	int i1,i2;
	int *p1,*p2;
	i1=8;i2=10;
	p1=&i1;p2=&i2;
	
	
	cout<<"Value of i1 is : "<<i1<<"     ,start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<i2<<"    ,start at : "<<p2<<endl;
	cout<<"When we let i1 = i2......"<<endl;
	i1=i2;
	//i2 assign to i1
	//i1 = i2 = 10
	cout<<"Value of i1 is : "<<i1<<"    ,start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<i2<<"    ,start at : "<<p2<<endl;
	
	cout<<"When we let p1 = p2......"<<endl;//p2 assign to p1
	//which means p1 and p2 point to a same object(i2)
	p1=p2;
	
	cout<<"Value of i1 is : "<<i1<<"    ,start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<i2<<"    ,start at : "<<p2<<endl;
	
	
}
