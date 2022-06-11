#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	double amount;
	cout<<"Welcome to Currency Exchange System. We accept USD and TWD:"<<endl;
	if(cin.peek()=='U'){
		cin.ignore(5,'D');
		cin>>amount;
		amount*=30;
		cout<<"Convert USD to TWD : TWD "<<amount<<endl;
	}
	else if(cin.peek()=='T'){
		cin.ignore(5,'D');
		cin>>amount;
		amount/=30.0;
		cout<<"Convert TWD to USD : USD "<<amount<<endl;
	}
	else{
		cout<<"The currency you input is not provided."<<endl;
		return 0;
	}
}
