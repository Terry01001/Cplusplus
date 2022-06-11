#ifndef POKE_H
#define POKE_H

#include<iostream>
#include<string>
using namespace std;

class Pokemon{
	public:
		Pokemon();
		Pokemon(string n,int h,int a);
		void settype(string t);
		string getname() const;
		string gettype() const;
		int getHP() const;
		int getATK() const;
		void print() const;
	private:
		string name;
		string type;
		int HP;
		int ATK;
};
class firePokemon:public Pokemon
{
	public:
	firePokemon();
	firePokemon(string n,int h,int a);
	void print() const;
};
class waterPokemon:public Pokemon
{
	public:
	waterPokemon();
	waterPokemon(string n,int h,int a);
	void print() const;
};
class grassPokemon:public Pokemon
{
	public:
	grassPokemon();
	grassPokemon(string n,int h,int a);
	void print() const;
};


#endif
