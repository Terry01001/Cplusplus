#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;


int main(){
	/*int i=0;
	char next;
	char list[1000];
	ifstream fin;
	fin.open("CH9_06_list.txt");
	
	if(fin.fail()){
		cout<<"can't open file."<<endl;
		exit(1);
	}
	
	while (fin>>next){
		list[i]=next;
		i++;
	}
	
	for(i=0;i<1000;i++){
		if(list[i]=='\0'){break;}
		cout<<list[i];
	}
	cout<<endl;
	*/
	char str[80];
	char *tok;
	const char* c =" ";
	
	cin.getline(str,80);
	
	tok=strtok(str,c);
	
	while(tok!=NULL){
		cout<<tok;
		tok=strtok(NULL,c);	
	}
	cout<<endl<<endl;
	cout<<tok<<endl;
	

}
