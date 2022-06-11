#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
using namespace std;

int main(){
	int seq1[50],seq2[50],all[100];
	int i=0;
	
	string file1,file2,outfile;
	cout<<"Enter the first of two input file names: ";
	cin>>file1;
	cout<<"Now a second input file name: ";
	cin>>file2;
	cout<<"Enter the output file name: ";
	cin>>outfile;
	cout<<endl;
	
	ifstream inStream1,inStream2;
	ofstream outStream;
	
	inStream1.open(file1);
	if (inStream1.fail()){
		cout<<"f1 failed."<<endl;
		exit(1);
	}
	
	inStream2.open(file2);
	if(inStream2.fail()){
		cout<<"f2 failed."<<endl;
		exit(1);
	}
	//show seq1
	cout<<"Contents of file "<<file1<<" are:"<<endl;
	while(inStream1 >> seq1[i]){
		cout<<seq1[i]<<endl;
		++i;
	}
	seq1[i]=-999;
	//show seq2
	cout<<"Contents of file "<<file2<<" are:"<<endl;
	i=0;
	while(inStream2 >> seq2[i]){
		cout<<seq2[i]<<endl;
		++i;
	}
	seq2[i]=-999;
	
	for(i=0;i<50;i++){
		if(seq1[i]!=-999){
			all[i]=seq1[i];
		}
		else{break;}
	}
	
	int j=i;
	
	for(i=0;i<50;i++){
		if(seq2[i]!=-999){
			all[j]=seq2[i];
			++j;
		}
		else{break;}
	}
	
	int k,temp;
	for(i=0;i<j-1;i++){//times
		for(k=0;k<j-i-1;k++){
			if(all[k]>all[k+1]){
				temp=all[k];
				all[k]=all[k+1];
				all[k+1]=temp;
			}
		}
	}
	
	/*
	//output test
	cout<<"all:"<<endl;
	for(i=0;i<j;i++){
		cout<<all[i]<<"|";
	}*/
	
	outStream.open(outfile);
	if(outStream.fail()){
		cout<<"output file opening failed."<<endl;
		exit(1);
	}
	cout<<"Contents of merged file "<<outfile<<" are:"<<endl;
	for(i=0;i<j;i++){
		cout<<all[i]<<endl;
		outStream<<all[i]<<" ";
	}
	
	inStream1.close();
	inStream2.close();
	outStream.close();
	
}
