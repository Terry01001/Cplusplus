#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int humanturn(int humantotal);
int computerturn(int computertotal);

int main(){
	int humantotalpoints=0,computertotalpoints=0;
	srand(time(NULL));
	while(1){
		humantotalpoints+=humanturn(humantotalpoints);
		cout<<"huamntotal: "<<humantotalpoints<<endl;
		cout<<"computertotal: "<<computertotalpoints<<endl;
		computertotalpoints+=computerturn(computertotalpoints);
		cout<<"huamntotal: "<<humantotalpoints<<endl;
		cout<<"computertotal: "<<computertotalpoints<<endl;
		if(humantotalpoints>=100){
			cout<<"human wins."<<endl;
			return 0;
		}
		else if(computertotalpoints>=100){
			cout<<"computer wins."<<endl;
			return 0;
		}
	}

}
int humanturn(int humantotal){
	int dice,points=0;
	char choice='r';
	while(choice == 'r'){//roll again
		dice=rand()%6 +1;
		cout<<dice<<endl;
		if(dice == 1){return 0;}
		else{
			points+=dice;
			cout<<"roll again or hold [r/h] : ";
			cin>>choice;
		}
	}
	return points;
};
int computerturn(int computertotal){
	int dice,points=0;
	while(points < 20 ){//keep rolling on until accumulat 20 or more.
		dice=rand()%6+1;
		cout<<dice<<endl;
		if(dice==1){return 0;}
		else{
			points+=dice;
		}
	
	}
	return points;
};

