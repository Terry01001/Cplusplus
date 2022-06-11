#include<iostream>
#include<cstring>

using namespace std;



int main(){
	int i;
	char *text;
	text = new char[80];
	char *start , *end;
	cout<<"Enter a string less than 80 characters long."<<endl;
	cin.getline(text,80);
	
	
	cout<<"Your string reversed is :";
	for(i=strlen(text)-1;i>=0;i--){
		cout<<text[i];
	}
	cout<<endl;
	
	start = text;
	end = text+strlen(text)-1;
	int count=1;
	while(start < end){
		if(start == end){
			if((*start) ==' ')
				count++;
		}
		else{
			if((*start) ==' ')
				count++;
			if((*end) ==' ')
				count++;
		}
		
		start++;
		end--;
	}
	
	cout<<"And your number of words is : "<<count<<endl;
	
}

