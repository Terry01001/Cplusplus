#include<iostream>
#include<vector>
using namespace std;



class Player{
	public:
		Player();
		Player(string s,int n);
		string getname();
		int getscore();
	private:
		string name;
		int score;
};
Player::Player(){}
Player::Player(string s,int n):name(s),score(n){}
string Player::getname(){return name;}
int Player::getscore(){return score;}


void addPlayer(int &numPlayers,vector<Player>& players);

int main(){
	string search,del;
	int i;
	char choice;
	vector<Player> game;
	while(1){
		cout<<"Select an option to enter."<<endl;
		cout<<"a. Add new player and scroe."<<endl;
		cout<<"b. Print all players and scores."<<endl;
		cout<<"c. Search for a player's score."<<endl;
		cout<<"d. remove a player."<<endl;
		cout<<"e. Quit."<<endl;
		cout<<"Enter an option:";
		cin>>choice;
		if(choice=='a'){
			i=game.size();
			addPlayer(i,game);
		}
		else if (choice =='b'){
			cout<<"Player Scores"<<endl;
			for(i=0;i<game.size();i++){
				cout<<game[i].getname()<<" "<<game[i].getscore()<<endl;
			}
		}
		else if (choice =='c'){
			cout<<"What player to search for?"<<endl;
			cin>>search;
			cout<<"The score for "<<search<<" is ";
			for(i=0;i<game.size();i++){
				if(search==game[i].getname()){
					cout<<game[i].getscore()<<endl;
				}
			}
		}
		else if (choice =='d'){
			cout<<"What player to remove?"<<endl;
			cin>>del;
			for(i=0;i<game.size();i++){
				if(del==game[i].getname()){
					game.erase(game.begin()+i);
				}
			}
			cout<<" Player "<<del<<" removed."<<endl;
			
		}
		else if(choice =='e'){break;}
		else{cout<<"Invalid"<<endl;continue;}
	
	}
}

void addPlayer(int &numPlayers,vector<Player>& players){
	string str;
	int num;
	cout<<"Enter new player name."<<endl;
	cin>>str;
	cout<<"Enter new player score."<<endl;
	cin>>num;
	Player p1(str,num);
	players.push_back(p1);
}
