#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int i,index;
	char cstr[100];
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	strcpy(cstr,str.c_str());
	
	for(i=0;i<100;i++){
		if(cstr[i]=='\0'){index=i;break;}
		//cout<<cstr[i];
	}
	cout<<"Inverse string: ";
	for(i=index-1;i>=0;i--){
		cout<<cstr[i];
	}
	
	cout<<endl;
}
