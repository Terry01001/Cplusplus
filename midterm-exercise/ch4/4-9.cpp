#include<iostream>
using namespace std;

double input(){
	double wei;
	cin>>wei;
	return wei;
}
void output1(double& w){
	cout<<"equivalent in kilograms : "<<w<<endl;
}
void output2(double& w){
	cout<<"equivalent in ounces : "<<w<<endl;
}
double calculate2(double& kilo){
	double ounces=kilo*2.2046*16;
	return ounces;
}
double calculate1(double& ounces){
	double kilogram=(ounces/16.0)/2.2046;
	return kilogram;
}
void calculation(double& weigh){
	int choice;
	double tran;
	cin>>choice;
	if(choice==1){
		tran=calculate1(weigh);
		output1(tran);
	}
	else if(choice==2){
		tran=calculate2(weigh);
		output2(tran);
	}
}
int main(){
	double weight;
	char yes='y';
	while(yes=='y'){
		weight=input();
		calculation(weight);
		cout<<"Do you want to repeat the calculation again?[y/n] ";
		cin>>yes;
	}
}
