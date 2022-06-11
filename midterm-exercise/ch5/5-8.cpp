#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

int main(){
	const int trials = 5000;
	short int birthdays[365];
	int successfultrials;
	bool sharedbirth;
	
	srand(time(NULL));
	
	for(int people = 2;people<51;++people){//run in the room of people
	
		successfultrials=0;
		for(int i=0;i<trials;i++){//5000 trials
			for(int j=0;j<365;birthdays[j++]=0);//set all days to 0
			sharedbirth = false;
			for(int j = 0;j<people;j++){
		//if the given bierthday is shared (has more than one person)
		//then we have a shared birthday,stop checking
				if(++birthdays[rand() % 365] > 1){
					sharedbirth = true;
					break;
				}
			}
			if (sharedbirth) {successfultrials++;}
		}
		cout<<"For "<<people<<" people, the probability of two birthdays is about "<<float(successfultrials)/float(trials)<<endl;//yao zhuan cheng float xing tai
	}
}
