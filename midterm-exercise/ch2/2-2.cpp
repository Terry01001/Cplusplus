#include<iostream>
using namespace std;

int main(){
	int exp,times=0;
	double deposit;
	double rate,month;
	cout<<"initial deposits : ";
	cin>>deposit;
	cout<<"interest rate : ";
	cin>>rate;
	cout<<"fixed expense : ";
	cin>>exp;
	if((deposit*rate) < exp){
	
		while(deposit >= exp){
			deposit-=exp;
			deposit=deposit*(1+rate);
			times+=1;
		}
		
	}
			
	else{
		cout<<"Enter Error!"<<endl;
		return 0;
	}
	cout<<"the amount in the bank can be utilized "<<times << " month(s)."<<endl;
}
