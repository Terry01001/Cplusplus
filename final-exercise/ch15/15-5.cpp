#include<iostream>
#include<time.h>
//#define answer 83
using namespace std;



class Player{
	public:
		Player();
		virtual int getGuess() ;//if be pure virtual can be declare? yes, it can
		
};
class HumanPlayer:public Player
{
	public:
		virtual int getGuess() override;
		//virtual and override can write or not it is easy to see
};
class ComputerPlayer:public Player
{
	public:
		virtual int getGuess() override;
};
//constructor
Player::Player(){}
int Player::getGuess(){return 0;}//no need to write but it's ok to write
//subclass
int HumanPlayer::getGuess(){
	int num;
	cin>>num;
	return num;
}
//sub
int ComputerPlayer::getGuess(){
	int num;
	num=rand()%100;
	cout<<"The computer guesses "<<num<<endl;
	return num;
}



bool checkForWin(int guess,int answer){
	if(answer==guess){
		cout<<"You're right! You win!"<<endl;
		return true;
	}
	else if(answer<guess)
		cout<<"Your guess is too high."<<endl;
	else
		cout<<"Your guess is too low."<<endl;
	return false;
}
void play(Player &player1,Player &player2){
	int answer=0,guess=0;
	answer = rand()%100;
	bool win = false;
	while(!win){
		cout<<"Player 1's turn to guess."<<endl;
		guess = player1.getGuess();
		win = checkForWin(guess,answer);
		if(win) return;
		
		cout<<"Player 2's turn to guess."<<endl;
		guess = player2.getGuess();
		win = checkForWin(guess,answer);
	}
}
int main(){
	//srand(time(NULL));
	char c;
	//Player p1;//test if abstract type can build instance
	HumanPlayer me;
	ComputerPlayer com;
	play(me,com);
	
	cout<<"Enter a character to exit."<<endl;
	cin>>c;
	return 0;
}

