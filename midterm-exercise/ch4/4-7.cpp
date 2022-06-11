#include<iostream>
using namespace std;

double input(){
	double wei;
	cin>>wei;
	return wei;
}
void output(double& w){
	cout<<"equivalent in kilograms : "<<w<<endl;
}
double calculate(double& ounces){
	double kilogram=(ounces/16.0)/2.2046;
	return kilogram;
}

int main(){
	double weight,kilogram;
	char choice='y';
	while(choice=='y'){
		weight=input();
		kilogram=calculate(weight);
		output(kilogram);
		cout<<"Do you want to repaet the calculation again?[y/n] ";
		cin>>choice;
	}
}
