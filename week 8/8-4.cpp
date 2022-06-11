#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> Grade;
	cout<<"Enter each grade and then -1 to stop."<<endl;
	int next,i;
	cin>>next;
	while(next>=0){
		Grade.push_back(next);
		cin>>next;
	}
	//for(i=0;i<Grade.size();i++){cout<<Grade[i]<<" ";};cout<<endl;
	int scores=10;
	for(i=0;i<Grade.size();i++){
		if(Grade[i]==100){scores=11;}
	}
	int times[scores]={0};
	for(i=0;i<Grade.size();i++){
		++times[(Grade[i]/10)];
	}
	//for(i=0;i<scores;i++){cout<<times[i]<<endl;}
	if(scores==11){
		cout<<times[0]<<" grade(s) of [ 0 , 9 ]"<<endl;
		cout<<times[1]<<" grade(s) of [ 10 , 19 ]"<<endl;
		cout<<times[2]<<" grade(s) of [ 20 , 29 ]"<<endl;
		cout<<times[3]<<" grade(s) of [ 30 , 39 ]"<<endl;
		cout<<times[4]<<" grade(s) of [ 40 , 49 ]"<<endl;
		cout<<times[5]<<" grade(s) of [ 50 , 59 ]"<<endl;
		cout<<times[6]<<" grade(s) of [ 60 , 69 ]"<<endl;
		cout<<times[7]<<" grade(s) of [ 70 , 79 ]"<<endl;
		cout<<times[8]<<" grade(s) of [ 80 , 89 ]"<<endl;
		cout<<times[9]<<" grade(s) of [ 90 , 99 ]"<<endl;
		cout<<times[10]<<" grade(s) of 100"<<endl;
	}
	else if(scores==10){
		cout<<times[0]<<" grade(s) of [ 0 , 9 ]"<<endl;
		cout<<times[1]<<" grade(s) of [ 10 , 19 ]"<<endl;
		cout<<times[2]<<" grade(s) of [ 20 , 29 ]"<<endl;
		cout<<times[3]<<" grade(s) of [ 30 , 39 ]"<<endl;
		cout<<times[4]<<" grade(s) of [ 40 , 49 ]"<<endl;
		cout<<times[5]<<" grade(s) of [ 50 , 59 ]"<<endl;
		cout<<times[6]<<" grade(s) of [ 60 , 69 ]"<<endl;
		cout<<times[7]<<" grade(s) of [ 70 , 79 ]"<<endl;
		cout<<times[8]<<" grade(s) of [ 80 , 89 ]"<<endl;
		cout<<times[9]<<" grade(s) of [ 90 , 99 ]"<<endl;
	}
}
