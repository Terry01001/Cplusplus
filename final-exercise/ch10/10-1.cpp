#include<iostream>
#include<cstdlib>
using namespace std;

typedef int* Darrayptr;
int i,j;

class TwoD{
	public:
		TwoD();
		TwoD(int Row,int Col);
		void set(int r,int c,int val);
		int get(int r,int c) const;
		int getrow() const;
		int getcol()const;
		//operator overload
		friend const TwoD operator+(const TwoD& matrix1,const TwoD& matrix2);
		//overload assignment
		TwoD& operator=(const TwoD& rside);
		//copy constructor
		TwoD(const TwoD& TDobject);
		//destructor
		~TwoD();
		
		
	private:
		Darrayptr *arr;
		int MaxRows;
		int MaxCols;
};
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
const TwoD operator+(const TwoD& matrix1,const TwoD& matrix2){
	int mytemp;
	if((matrix1.MaxRows==matrix2.MaxRows) &&(matrix1.MaxCols==matrix2.MaxCols)){
		TwoD plus(matrix1.getrow(),matrix1.getcol());
		for(i=0;i<matrix1.getrow();i++){
			for(j=0;j<matrix1.getcol();j++){
				mytemp=matrix1.get(i,j)+matrix2.get(i,j);
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


int main(){
	int a,b;
	int temp;
	//matrix 1
	cout<<"Enter the row and column dimensions of the array"<<endl;
	cin>>a>>b;
	TwoD m1(a,b);
	cout<<"Enter "<<a<<" rows of "<<b<< " doubles each"<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cin>>temp;
			m1.set(i,j,temp);
		}	
	}
	cout<<"Echoing the 2 dim. array, matrix1"<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cout<<m1.get(i,j)<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//matrix 2
	cout<<"Enter the row and column dimensions of the array"<<endl;
	cin>>a>>b;
	TwoD m2(a,b);
	cout<<"Enter "<<a<<" rows of "<<b<< " doubles each"<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cin>>temp;
			m2.set(i,j,temp);
		}	
	}
	cout<<"Echoing the 2 dim. array, matrix2"<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cout<<m2.get(i,j)<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	//assign matrix 2 to matrix 3
	TwoD m3(m2);
	cout<<"Assigning matrix 2 to matrix 3"<<endl;
	cout<<"Displaying the 2 dim array, matrix3 resulting from the assignment"<<endl;
	cout<<"Rows "<<m3.getrow()<<" Cols "<<m3.getcol()<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cout<<m3.get(i,j)<<" ";
		}
		cout<<endl;
	}
	//addition
	TwoD m4(m1+m2);
	cout<<"Displaying the 2 dim array,sum of matrix 1 and 2"<<endl;
	cout<<"Rows "<<m4.getrow()<<" Cols "<<m4.getcol()<<endl;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			cout<<m4.get(i,j)<<" ";
		}
		cout<<endl;
	}
	
}

