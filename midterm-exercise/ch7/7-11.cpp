#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class player
{
	private:
		string name;
		int score;
	public:
		player();
		player(string n,int s);
		void output();
		int search(string s);
		int remove(string r);
};

player::player()
{}

player::player(string n,int s)
{
	name=n;
	score=s;
}


void player::output()
{
	cout<<name<<" "<<score<<endl; 
}

int player::search(string s)
{
	
	if(s==name)
		cout<<"The score for "<<name<<" is "<<score<<endl;
	else
		return 1;
	
	return 0;
}

int player::remove(string r)
{
	if(r==name)
		cout<<"Player "<<name<<" removed."<<endl;
	else
		return 1;
	
	return 0;
}


int main()
{
	cout<<"Enter an option."<<endl;
	cout<<"a. Add new player and score."<<endl;
	cout<<"b. Print all players and scores."<<endl;
	cout<<"c. Search for a player's scores."<<endl;
	cout<<"d. Remove a player."<<endl;
	cout<<"e. Quit."<<endl;
	
	char ans;
	string n;
	int s;
	int t1=0;
	int t2=0;
	string search,remove;
	vector<player> b;
	player a;
	
	
	while(1)
	{
		cout<<"INPUT: ";
		cin>>ans;
		
		if(ans=='a')
		{
			cout<<"Enter new player name."<<endl;
			cin>>n;
			cout<<"Enter new player score."<<endl;
			cin>>s;
			a=player(n,s);
			b.push_back(a);
		}else if(ans=='b')
		{
			cout<<"Player scores"<<endl; 
			for(int j=0;j<b.size();j++)
			{
				b[j].output();
			}
		}else if(ans=='c')
		{
			cout<<"What player to search for?"<<endl;
			cin>>search;
			for(int j=0;j<b.size();j++)
			{
				if(b[j].search(search)==0)
				{
					t1=0;
					break;
				}	
				else
					t1=1;
			}
			
			if(t1==1)
				cout<<"Player "<<search<<" not found."<<endl;
		}else if(ans=='d')
		{
			cout<<"What player to remove?"<<endl;
			cin>>remove;
			for(int j=0;j<b.size();j++)
			{
				if(b[j].remove(remove)==0)
				{
					b.erase(b.begin()+j);
					t2=0;
					break;
				}else 
					t2=1; 
			}
			if(t2==1)
				cout<<"Player "<<remove<<"not found."<<endl;
		}else if(ans=='e')
			break;
	}
}
