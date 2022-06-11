#include<iostream>
#include<cstdlib>
#include"TwoD.h"
using namespace std;

int i,j;

using TD::TwoD;


//constructor
TwoD::TwoD():MaxRows(3),MaxCols(3){
	arr = new Darrayptr[3];
	for(i=0;i<3;i++)
		arr[i] = new int[3];
}
TwoD::TwoD(int Row,int Col):MaxRows(Row),MaxCols(Col){
	arr = new Darrayptr[MaxRows];
	for(i=0;i<3;i++)
		arr[i] = new int[MaxCols];
}
//mem funct
void TwoD::set(int r,int c,int val){arr[r][c] = val;}
int TwoD::get(int r,int c)const{return arr[r][c];}
int TwoD::getrow()const{return MaxRows;}
int TwoD::getcol()const{return MaxCols;}
//operator overload(+,friend)
const TwoD TwoD::operator+(const TwoD& matrix2){
	int mytemp;
	if((MaxRows==matrix2.getrow()) &&(MaxCols==matrix2.getcol())){
		TwoD plus(matrix2.getrow(),matrix2.getcol());
		for(i=0;i<matrix2.getrow();i++){
			for(j=0;j<matrix2.getcol();j++){
				mytemp=arr[i][j]+matrix2.get(i,j);
				plus.set(i,j,mytemp);
			}
		}
		return plus;
	}
	else{cout<<"incorrect!";exit(1);}
}
//overload assignment =
TwoD& TwoD::operator=(const TwoD& rside){
	
	MaxRows=rside.MaxRows;
	MaxCols=rside.MaxCols;
	for(i=0;i<MaxRows;i++){
		for(j=0;j<MaxCols;j++){
			arr[i][j]=rside.get(i,j);
		}
	}
	return *this;
}
//copy constructor//???can access priv var?
TwoD::TwoD(const TwoD& TDobject)
	:MaxRows(TDobject.getrow()),MaxCols(TDobject.getcol()){
		arr=new Darrayptr[MaxRows];
		for(i=0;i<MaxRows;i++){
			arr[i]=new int[MaxCols];
		}
		for(i=0;i<MaxRows;i++){
			for(j=0;j<MaxCols;j++){
				arr[i][j]=TDobject.get(i,j);
			}
		}
	}
//destructor
TwoD::~TwoD(){
	for(i=0;i<MaxRows;i++){
		delete[] arr[i]; 
	}
	delete [] arr;
}
