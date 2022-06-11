#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;


int main(){
	string name;
	double next;
	double medval=0,firstqval=0,lastqval=0;
	int count=0,medind,firstq=1,lastq=1,i;
	cout<<"Enter a file name :";
	cin>>name;
	
	ifstream fcount;
	fcount.open(name);
	if(fcount.fail()){
		cout<<"can't open file "<<name<<endl;
		exit(1);
	}
	while(fcount>>next){count++;}//count how many
	fcount.close();//close file
	
	//cal firstq lastq
	firstq+=count/4;
	lastq+=count*3/4;
	//
	
	ifstream fin;
	fin.open(name);
	if(fin.fail()){
		cout<<"can't open file "<<name<<endl;
		exit(1);
	}
	
	if(count%2==0){//even count
		medind=count/2;
		for(i=1;i<=count;i++){//cal medind,medval
			fin>>next;
			if(i==medind || i==medind+1 ){
				medval+=next;
			}
			else if(i==firstq){
				firstqval+=next;
			}
			else if(i==lastq){
				lastqval+=next;
			}
		}
		cout<<"Median number : "<<medind<<","<<medind+1<<" , value : "<<medval/2<<endl;
		cout<<"Quartile : "<<firstqval<<" "<<medval/2<<" "<<lastqval<<endl;
	}
	else{//odd count
		medind = count/2+1;
		for(i=1;i<=count;i++){//cal medind,medval
			fin>>next;
			if(i==medind){
				medval+=next;
			}
			else if(i==firstq){
				firstqval+=next;
			}
			else if(i==lastq){
				lastqval+=next;
			}
		}
		cout<<"Median number : "<<medind<<" , value : "<<medval<<endl;
		cout<<"Quartile : "<<firstqval<<" "<<medval<<" "<<lastqval<<endl;	
	}
	
	fin.close();
}

