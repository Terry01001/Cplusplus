#include<iostream>
using namespace std;

class complex{
	public:
		complex(int a,int b);
		complex();
		int getreal() const;
		int getimag() const;
		//operator overload
		const complex operator+(const complex& num2);
		const complex operator*(int x);
		const complex operator=(const complex& num2);
		const complex operator*(const complex& num2);
		//prefix and postfix
		const complex operator++(int ignore);
		const complex operator++();
		 
		friend ostream& operator<<(ostream& out,const complex& num2);
		friend istream& operator>>(istream& in,complex& num2);
		 
	private:
		int real;
		int imag;
	
};
//constructor
complex::complex(int a,int b):real(a),imag(b){}
complex::complex():real(0),imag(0){}
//mem funct
int complex::getreal() const{return real;}
int complex::getimag() const{return imag;}
//operator overloading
const complex complex::operator+(const complex& num2){
	int totreal=real+num2.getreal();
	int totimag=imag+num2.getimag();
	return complex(totreal,totimag);
}
const complex complex::operator*(int x){return complex(x*real,x*imag);}
const complex complex::operator=(const complex& num2){
	real=num2.getreal();
	imag=num2.getimag();
	return complex(real,imag);
}
const complex complex::operator*(const complex& num2){
	int ansreal=real*num2.getreal()-imag*num2.getimag();
	int ansimag=imag*num2.getreal()+real*num2.getimag();
	return complex(ansreal,ansimag);
}
//
const complex complex::operator++(int ignore){//postfix
	int temp1=real;
	int temp2=imag;
	real++;imag++;
	return complex(temp1,temp2);
}
const complex complex::operator++(){//prefix
	real++;imag++;
	return complex(real,imag);
}

//
ostream& operator<<(ostream& out,const complex& num2){
	out<<"("<<num2.getreal()<<","<<num2.getimag()<<")";
	return out;
}
istream& operator>>(istream& in,complex& num2){
	int r,i;
	in>>r>>i;
	num2.real=r;
	num2.imag=i;
	return in;	
}



int main(){
	complex A,B;
	int C;
	cout<<"Enter the pair A(real1,imag1): ";
	cin>>A;
	cout<<"Enter the pair B(real2,imag2): ";
	cin>>B;
	cout<<"Enter C: ";
	cin>>C;
	cout<<endl;
	cout<<"A: "<<A<<endl;
	cout<<"B: "<<B<<endl;
	cout<<"A + B: "<<A+B<<endl;
	cout<<"A * C: "<<A*C<<endl;
	
	cout<<"A++: "<<A++<<endl;
	cout<<"++A: "<<++A<<endl;
	
	A=A+B;
	cout<<"A += B, A: "<<A<<endl;
	A=A*B;
	cout<<"A *= B, A: "<<A<<endl;
}
