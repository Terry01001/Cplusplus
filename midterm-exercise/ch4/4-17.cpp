#include<iostream>
#include<string>
using namespace std;

string player[5]={"Ronaldo","Didier","Pele","Kaka","Cristiano"};
int score[5]={10400,9800,12300,8400,8000};

int getplayerscore(string name){
	int i;
	for(i=0;i<5;i++){
		if (name == player[i]){
			return score[i];
		}
	}
	return 0;
}
void performance(int search){
	double avg=0;
	int i;
	for(i=0;i<5;i++){
		avg+= score[i];
	}
	avg/=5.0;
	if(search>avg){
		cout<<"The palyer's is above average."<<endl;
	}
	else if (search==avg){cout<<"The palyer's is equal to the average."<<endl;}
	else{cout<<"The palyer's is below average."<<endl;}
}
int main(){
	int check;
	string name;
	cout<<"input the player's name : ";
	cin>>name;
	check=getplayerscore(name);
	if(check==0){
		cout<<"can't find the player!"<<endl;
		return 0;
	}
	else{
		cout<<"The player's high score : "<<check<<endl;
		performance(check);
	}


}
