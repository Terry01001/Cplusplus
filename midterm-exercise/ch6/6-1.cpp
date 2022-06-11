#include<iostream>
#include<fstream>
using namespace std;

struct rating{
	int core;
	int performance;
	int ideation;
};

int main(){
	rating rate;
	string s;
	double total[5];
	int num,i;
	int point[5];
	ifstream inputstream;//keypoint
	inputstream.open("data.txt");
	for(i=1;i<=4;i++){inputstream>>s;}
	for(i=0;i<5;i++){
		inputstream>>num;
		inputstream>>rate.core;
		inputstream>>rate.performance;
		inputstream>>rate.ideation;
		total[i]=rate.core*3+rate.performance*5/3.0+rate.ideation*2;
	}
	inputstream.close();
	//output bei
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);//keypoint
	
	for(i=0;i<5;i++){
		if(total[i]>=80){point[i]=1;}
		else if(total[i]>=60 && total[i]<80){point[i]=2;}
		else if(total[i]>=50 && total[i]<60){point[i]=3;}
		else{point[i]=4;}
	}
	cout<<"Number Total Point"<<endl;
	for(i=0;i<5;i++){
		cout<<i+1<<"      "<<total[i]<<"  "<<point[i]<<endl;
	}
	
	/*
	int total;
	double fin;
	rating score;
	getdata(score);
	total=(score.core*2)+(score.performance*2)+(score.ideation*2);
	if(total >= 80){cout<<"total points : "<<total<<"  rated : "<<1<<endl;}
	else if(total >= 60 &&total <= 79){cout<<"total points : "<<total<<"  rated : "<<2<<endl;}
	else if(total>=50 && total<=59){cout<<"total points : "<<total<<"  rated : "<<3<<endl;}
	else{cout<<"total points : "<<total<<"  rated : "<<4<<endl;}
	fin=(score.core*3.0/10.0)+(score.performance*5.0/10.0)+(score.ideation*2.0/10.0);
	cout<<"The final rating point : "<<fin<<endl;*/
}
