#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;


int main(){
	int i,j,k,count=0;
	char text[200];
	cin.getline(text,200);
	
	for(i=0;i<200;i++){//xiugai wei love
		if(text[i]=='\0'){break;}
		if(i==0){
			if(isalpha(text[i]) && isalpha(text[i+1]) && isalpha(text[i+2]) && isalpha(text[i+3]) && !isalpha(text[i+4])){
				if(isupper(text[i])){text[i]='L';}
				else{text[i]='l';}
				text[i+1]='o';
				text[i+2]='v';
				text[i+3]='e';
				i=i+3;
			}
		}
		
		if(text[i]==' '){
			i+=1;
			if(isalpha(text[i]) && isalpha(text[i+1]) && isalpha(text[i+2]) && isalpha(text[i+3]) && !isalpha(text[i+4])){
				if(isupper(text[i])){text[i]='L';}
				else{text[i]='l';}
				text[i+1]='o';
				text[i+2]='v';
				text[i+3]='e';
				i=i+3;
			}
		}
		
	}
	
	for(i=0;i<200;i++){
		if(text[i]=='\0'){break;}
		cout<<text[i];
	}
	cout<<endl;
	
}
