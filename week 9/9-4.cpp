#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;


int main(){
	int count[10];
	int i,index;
	char text[1000],keyword[100];
	cin.getline(text,1000);
	cin.getline(keyword,100);
	const char *c=" ,.";
	const char *k=" ";
	char *sub,*key,*cp;
	
	//for(i=0;i<10;i++){cout<<count[i]<<endl;return 0;}
	
	//tolower
	for(i=0;i<1000;i++){
		if(text[i]=='\0'){break;}
		if(isalpha(text[i])){
		text[i]=tolower(text[i]);}
	}
	
	i=0;
	
	key=strtok(keyword,k);
	//cout<<key<<endl;
	while(key){
		strcpy(cp,key);
		if(cp=="EOF"){break;}
		
		sub=strtok(text,c);
		
		while(sub){
			if(strcmp(sub,cp)==0){count[i]+=1;}	
			sub=strtok(NULL,c);
		}
		key=strtok(NULL,k);
		//cout<<key<<endl;
		//return 0;
		i+=1;
		index=i+1;
	}
	for(i=0;i<index;i++){
	
		cout<<count[i]<<"  ";
		
	}
	cout<<endl;
	return 0;
	
	
	
}
