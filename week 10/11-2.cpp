#include<iostream>
using namespace std;

typedef int* IAP;

int main(){
	int i,j;
	int row,col;
	cout<<"Please enter the number of rows and columns :"<<endl;
	cin>>row>>col;
	
	int arr[row][col];
	
	IAP *A = new IAP[row];
	for(i=0;i<row;i++){
		A[i]=new int[col];
	}
	cout<<"Please enter all elements :"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			A[i][j]=arr[i][j];
		}
	}
	
	cout<<"2d array address (General method) :"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<arr[i][j]<<"@ "<<&(arr[i][j])<<"  ";
		}
		cout<<endl;
	}
	
	cout<<"2d array address (Pointer's method) :"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<A[i][j]<<"@ "<<&(A[i][j])<<"  ";
		}
		cout<<endl;
	}

}
