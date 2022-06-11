#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;



int main(){
	string name;
	int count = 0;
	double next,sum=0;
	while(true)
	{
		cout<<"Enter a file name :";
		cin>>name;
		ifstream inStream;
		
		inStream.open(name);
		if(inStream.fail()){
			cout<<"can't open file "<<name<<endl;
			exit(1);
		}
		else{
			while(inStream >> next){
				cout<<next<<endl;
				sum+=next;
				count++;	
			}
			cout<<"Average of "<<count<<" numbers is "<<sum/count<<endl;
			sum = 0 ;count=0;
		}
		inStream.close();
	}
		
	
}
