#include<iostream>
using namespace std;

double input(){
	double wei;
	cin>>wei;
	return wei;
}
void output(double& w){
	cout<<"equivalent in ounces : "<<w<<endl;
}
double calculate(double& kilo){
	double ounces=kilo*2.2046*16;
	return ounces;
}

int main(){
	double weight,ounces;
	char choice='y';
	while(choice=='y'){
		weight=input();
		ounces=calculate(weight);
		output(ounces);
		cout<<"Do you want to repaet the calculation again?[y/n] ";
		cin>>choice;
	}
}
