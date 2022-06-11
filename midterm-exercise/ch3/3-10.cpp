#include<iostream>
using namespace std;

char gender;
int hf,hm;

double height_predict(int hf,int hm,char gender);

int main(){
	char answer='y';
	while(answer=='y'){
		cout<<"your kid's gender (m/f) : ";
		cin>>gender;
		cout<<"kid's dad's height (inches) : ";
		cin>>hf;
		cout<<"kid's moom's height (inches) : ";
		cin>>hm;
		cout<<"your child probably height is : "<<height_predict(hf,hm,gender)<<endl;
		
		cout<<"Do you want to calculate again [y/n] : ";
		cin>>answer;
	}	
}

double height_predict(int hf,int hm,char gender){
	if(gender=='m')
		return ((hm*13.0/12.0)+hf)/2.0;
	else
		return ((hf*12.0/13.0)+hm)/2.0;
};
