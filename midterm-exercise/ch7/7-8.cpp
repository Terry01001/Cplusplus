#include<iostream>
#include<vector>
using namespace std;

int main(){
	int score,i,max=-1;
	vector<int> grade;
	cout<<"Enter each grade and then -1 to stop."<<endl;
	
	while(score!=-1){
		cin>>score;
		if(score>max){max=score;}
		grade.push_back(score);
	}
	int scorenum[max+1]={0};
	for(i=0;i<grade.size();i++){//key point
		scorenum[grade[i]]++;
	}
	
	for(i=0;i<=max;i++){
		cout<<scorenum[i]<<" grade(s) of "<<i<<endl;
	}
	
}
