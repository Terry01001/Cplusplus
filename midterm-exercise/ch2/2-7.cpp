#include<iostream>
using namespace std;

int main(){
	double avg;
	double points=0;
	int sub;
	char grade;
	cout<<"input the number of subjects : ";
	cin>>sub;
	for(int i=1;i<=sub;i++){
		cin>>grade;
		if(grade=='S')
			points+=10;
		else if(grade=='A')
			points+=9;
		else if(grade=='B')
			points+=8;
		else if(grade=='C')
			points+=7;
		else if(grade=='D')
			points+=6;
		else if(grade=='E')
			points+=5;
		else if(grade=='F')
			points+=0;
	}
	avg=points/sub;
	cout<<"GPA is "<< avg <<endl;
}
