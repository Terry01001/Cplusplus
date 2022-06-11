#include<iostream>
#include"Poke.h"
using namespace std;

int main(){
	firePokemon p0("Charmander",10,3),p1("Charmeleon",20,7),p2("Charizard",40,15);
	waterPokemon p3("Squirtle",10,3),p4("Wartortle",20,7),p5("Blastoise",40,15);
	grassPokemon p6("Bulbasaur",10,3),p7("Ivysaur",20,7),p8("Venusaur",40,15);
	
	p0.print();
	p1.print();
	p2.print();
	p3.print();
	p4.print();
	p5.print();
	p6.print();
	p7.print();
	p8.print();

}
