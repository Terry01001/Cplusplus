#include<iostream>
using namespace std;

int main(){
	int cel=100,fah;
	fah=cel*9/5+32;
	while(cel!=fah){
		cel--;
		fah=cel*9/5+32;
	}
	cout<<"when it is "<< fah <<" Celsius(Fahrenheit), both value equals."<<endl;
}
