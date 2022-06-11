#include<iostream>
using namespace std;

char str[50];

int count(char ch){
	int x=0,i;
	for(i=0;i<50;i++){
		if(str[i] == ch){
			x++;
		}
	}
	return x;
}


int main(){
	cout<<"input the string : "<<endl;
	cin>>str;
	
	
	cout<<"Vowel\tCount"<<endl;
	cout<<"  a  \t  "<<count('a')<<endl;
	cout<<"  e  \t  "<<count('e')<<endl;
	cout<<"  i  \t  "<<count('i')<<endl;
	cout<<"  o  \t  "<<count('o')<<endl;
	cout<<"  u  \t  "<<count('u')<<endl;
}
