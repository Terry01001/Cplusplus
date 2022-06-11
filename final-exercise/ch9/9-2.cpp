#include<iostream>
#include<string>
#include<cctype>
using namespace std;


int main(){
	int i=0,ascii,num;
	char s;
	char ans[100];
	cout<<"When enter a single \"-1\" in one line this prigram will end."<<endl;
	
	
	for(i=0;i<100;i++){ans[i]='#';}//initialize
	
	while(1){
		i=0;
		cin.get(s);
		if(s=='-'&& cin.peek()=='1'){return 0;}
		do{
			if(s==' '){cin.get(s);continue;}
			else if(isalpha(s)){
				if(isupper(s)){
					ascii=int(s)+3;
					if(ascii>int('Z')){
						ascii=ascii%(int('Z')+1);
						ans[i]=char(ascii+'A');
					}
					else{
						ans[i]=char(ascii);
					}
				}
				else{
					ascii=int(s)+3;
					if(ascii>int('z')){
						ascii%=(int('z')+1);
						ans[i]=char(ascii+'a');
					}
					else{
						ans[i]=char(ascii);
					}
				}
			}
			else if(isdigit(s)){
				ans[i]=char((s-'0'+5)%10+'0');
			}
			else{
				ans[i]=' ';
			}
			++i;
			cin.get(s);
		}while(s!='\n');
	
		//ans[i+1]='\0';
		for(i=0;i<100;i++){//output
			if(ans[i]=='#'){break;}
			cout<<ans[i];
		}
		cout<<endl;
		
		for(i=0;i<100;i++){ans[i]='#';}//initialize
		
	}	
	
}
