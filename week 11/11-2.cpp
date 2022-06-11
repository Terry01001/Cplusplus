#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	int i,score=0;
	char cor[10],my[10];
	
	ifstream inStream1,inStream2;
	
	cout<<"Start reading true answers and your answers ......"<<endl;
	
	inStream1.open("TrueAnswer.txt");
	if (inStream1.fail()){
		cout<<"f1 failed."<<endl;
		exit(1);
	}
	
	inStream2.open("MyAnswer.txt");
	if(inStream2.fail()){
		cout<<"f2 failed."<<endl;
		exit(1);
	}
	
	//read
	for(i=0;i<10;i++){
		inStream1 >> cor[i];
		inStream2 >> my[i];
	}
	//output
	cout<<"Question answer is : ";
	for(i=0;i<10;i++){cout<<cor[i]<<" ";}
	cout<<endl;
	cout<<"Your answer is : ";
	for(i=0;i<10;i++){cout<<my[i]<<" ";}
	cout<<endl;
	
	cout<<"Calculating your score ......"<<endl;
	for(i=0;i<10;i++){
		if(cor[i]==my[i]){
			score+=10;
		}
	}
	cout<<"YOur score is : "<<score<<endl;
	
	inStream1.close();
	inStream2.close();


}
