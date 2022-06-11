#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;



int main(){
	string name;
	int test=3,next;
	cout<<"Enter a file name :";
	cin>>name;
	
	ifstream fin;
	ofstream fout;
	fin.open(name);
	
	
	if(fin.fail()){
		cout<<"Can't open file "<<name<<endl;
		exit(1);
	}
	else{
		fout.open("data3_out");
		cout<<"Build data3_out"<<endl;
	}
	
	
	while (fin >> next){
		if(next==test){
			fout << next <<endl;
			test+=4;
		}
		else{
			break;
		}
	}	
	
	fin.close();
	fout.close();
}

