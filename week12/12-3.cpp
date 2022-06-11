#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Character{
	public:
		Character();
		Character(string n,int l);
		virtual void print() = 0;
		string getname();
		int getlevel();
		int getexp();
		void beatMonster(int e);
		void levelup();
		static const int EXP_LV = 100;
	private:
		//static const int EXP_LV = 100;
		string name;
		int level;
		int exp;
};
class Knight:public Character
{
	public:
		Knight();
		Knight(string n,int l);
		void print() override;
};
class Warrior:public Character
{
	public:
		Warrior();
		Warrior(string n,int l);
		void print() override;
};
//constructor
Character::Character(){}
Character::Character(string n, int l):name(n),level(l){exp=pow(level-1,2)*100;}
//memfunct
string Character::getname(){return name;}
int Character::getlevel(){return level;}
int Character::getexp(){return exp;}
void Character::beatMonster(int e){
	exp+=e;
}
void Character::levelup(){
	level=floor(sqrt(exp/EXP_LV))+1;
}
//subclass
Knight::Knight(){}
Knight::Knight(string n,int l):Character(n,l){}
void Knight::print(){
	cout<<"Knight "<<getname()<<": Level "<<getlevel()<<"("<<getexp()<<"/"<<pow(getlevel(),2)*100<<"),"<<endl;
}
//sub
Warrior::Warrior(){}
Warrior::Warrior(string n,int l):Character(n,l){}
void Warrior::print(){
	cout<<"Warrior "<<getname()<<": Level "<<getlevel()<<"("<<getexp()<<"/"<<pow(getlevel(),2)*100<<"),"<<endl;
}

//
int main(){
	Knight Leo("Leo",10),Tsukasa("Tsukasa",8);
	Warrior Rose("Rose",12);
	
	Leo.print();Tsukasa.print();Rose.print();
	cout<<"Rose beat the monster"<<endl;
	Leo.print();Tsukasa.print();
	Rose.beatMonster(10000);
	Rose.levelup();
	Rose.print();
}

