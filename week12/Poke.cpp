#include"Poke.h"
using namespace std;

//constructor
Pokemon::Pokemon(){}
Pokemon::Pokemon(string n,int h,int a):name(n),HP(h),ATK(a){}
//memfunct
void Pokemon::settype(string t){type = t;}
string Pokemon::getname() const{return name;}
string Pokemon::gettype() const{return type;}
int Pokemon::getHP() const{return HP;}
int Pokemon::getATK() const{return ATK;}
void Pokemon::print() const{
	cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<<ATK<<endl;
}
//subclass//fire poke
firePokemon::firePokemon(){}
firePokemon::firePokemon(string n,int h,int a):Pokemon(n,h,a){
	settype("fire");
}
void firePokemon::print() const{
	cout<<getname()<<" Type:"<<gettype()<<" HP:"<<getHP()<<" ATK:"<<getATK()<<endl;
}
//waterpoke
waterPokemon::waterPokemon(){}
waterPokemon::waterPokemon(string n,int h,int a):Pokemon(n,h,a){
	settype("water");
}
void waterPokemon::print() const{
	cout<<getname()<<" Type:"<<gettype()<<" HP:"<<getHP()<<" ATK:"<<getATK()<<endl;
}
//grasspoke
grassPokemon::grassPokemon(){}
grassPokemon::grassPokemon(string n,int h,int a):Pokemon(n,h,a){
	settype("grass");
}
void grassPokemon::print() const{
	cout<<getname()<<" Type:"<<gettype()<<" HP:"<<getHP()<<" ATK:"<<getATK()<<endl;
}
//

