#include<iostream>
#include"TwoD.h"
using namespace std;




using TD::TwoD;

int main(){
	int i,j;
	int a,b;
	int temp;
	//matrix 1
	cout<<"Enter the row and column dimensions of the array"<<endl;
	cin>>a>>b;
	TwoD m1(a,b);
	cout<<"Enter "<<a<<" rows of "<<b<< " integers each"<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cin>>temp;
			m1.set(i,j,temp);
		}	
	}
	
	
	//matrix 2
	cout<<"Enter the row and column dimensions of the array"<<endl;
	cin>>a>>b;
	TwoD m2(a,b);
	cout<<"Enter "<<a<<" rows of "<<b<< " integers each"<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cin>>temp;
			m2.set(i,j,temp);
		}	
	}
	//assign
	cout<<endl;
	cout<<"matrix3 = matrix2"<<endl;
	TwoD m3 = m2;
	cout<<"matrix3 = "<<endl;
	
	for (i=0;i<m3.getrow();i++){
		for (j=0;j<m3.getcol();j++){
			cout<<m3.get(i,j)<<" ";
		}
		cout<<endl;
	}
	
	
	
	//addition
	cout<<"matrix3 = matrix1 + matrix2"<<endl;
	m3 = (m1+m2);
	cout<<"matrix3 = "<<endl;
	
	for (i=0;i<m3.getrow();i++){
		for (j=0;j<m3.getcol();j++){
			cout<<m3.get(i,j)<<" ";
		}
		cout<<endl;
	}



}
