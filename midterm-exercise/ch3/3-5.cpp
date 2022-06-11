#include<iostream>
using namespace std;

double height,weight,age;

double hat(double height,double weight){
	return 2.9*(weight/height);
};
double jacket(double height,double weight,double age){
	if(age>30)
		return (height*weight/288)+(age-30)/10/8;
	else
		return (height*weight/288);
};
double waist(double weight,double age){
	if(age>28)
		return (weight/5.7)+(age-28)/2/10;
	else
		return (weight/5.7);
};

int main(){
	char answer='y';
	while(answer=='y'){
		cout<<"key in your height(inches) : ";
		cin>>height;
		cout<<"key in your weight(pounds) : ";
		cin>>weight;
		cout<<"key in your age : ";
		cin>>age;
		cout<<"Your hat size is "<<hat(height,weight)<<endl;
		cout<<"Your jacket size is "<<jacket(height,weight,age)<<endl;
		cout<<"Your waist size is "<<waist(weight,age)<<endl;
		
		cout<<"Do you want to calculate again [y/n] : ";
		cin>>answer;
	}
}

