#include<iostream>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

class Pokemon{
	public:
		Pokemon();
		Pokemon(string n,int h,int a);
		void settype(string t);
		void setHP(int blood);
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
	int attack(Pokemon comp);
	int beattack(int hurt);
};
class waterPokemon:public Pokemon
{
	public:
	waterPokemon();
	waterPokemon(string n,int h,int a);
	void print() const;
	int attack(Pokemon comp);
	int beattack(int hurt);
};
class grassPokemon:public Pokemon
{
	public:
	grassPokemon();
	grassPokemon(string n,int h,int a);
	void print() const;
	int attack(Pokemon comp);
	int beattack(int hurt);
};
//constructor
Pokemon::Pokemon(){}
Pokemon::Pokemon(string n,int h,int a):name(n),HP(h),ATK(a){}
//memfunct
void Pokemon::settype(string t){type = t;}
void Pokemon::setHP(int blood){HP = blood;}
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
//ATKKKK
int firePokemon::attack(Pokemon comp){
	cout<<getname()<<" atk >> "<<comp.getname()<<endl;
	if (comp.gettype()=="grass"){
		return 2*getATK();
	}
	else{return getATK();}
}
int firePokemon::beattack(int hurt){
	cout<<"remain HP "<< getHP()-hurt<<endl;
	setHP(getHP()-hurt);
	return getHP();
}
//waterpoke
waterPokemon::waterPokemon(){}
waterPokemon::waterPokemon(string n,int h,int a):Pokemon(n,h,a){
	settype("water");
}
void waterPokemon::print() const{
	cout<<getname()<<" Type:"<<gettype()<<" HP:"<<getHP()<<" ATK:"<<getATK()<<endl;
}
int waterPokemon::attack(Pokemon comp){
	cout<<getname()<<" atk >> "<<comp.getname()<<endl;
	if (comp.gettype()=="fire"){
		return 2*getATK();
	}
	else{return getATK();}
}
int waterPokemon::beattack(int hurt){
	cout<<"remain HP "<< getHP()-hurt<<endl;
	setHP(getHP()-hurt);
	return getHP();
}
//grasspoke
grassPokemon::grassPokemon(){}
grassPokemon::grassPokemon(string n,int h,int a):Pokemon(n,h,a){
	settype("grass");
}
void grassPokemon::print() const{
	cout<<getname()<<" Type:"<<gettype()<<" HP:"<<getHP()<<" ATK:"<<getATK()<<endl;
}
int grassPokemon::attack(Pokemon comp){
	cout<<getname()<<" atk >> "<<comp.getname()<<endl;
	if (comp.gettype()=="water"){
		return 2*getATK();
	}
	else{return getATK();}
}
int grassPokemon::beattack(int hurt){
	cout<<"remain HP "<< getHP()-hurt<<endl;
	setHP(getHP()-hurt);
	return getHP();
}
//

int main(){
	int c,d,atk,hp;
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
	
	cout<<"Please enter two pokemon's number:"<<endl;
	cin>>c>>d;
	if(c==0){
		if (d==1){
			while(1){
				atk=p0.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p0.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if (d==3){
			while(1){
				atk=p0.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if (d==4){
			while(1){
				atk=p0.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if (d==5){
			while(1){
				atk=p0.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if (d==6){
			while(1){
				atk=p0.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if (d==7){
			while(1){
				atk=p0.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if (d==8){
			while(1){
				atk=p0.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==1){
		if (d==0){
			while(1){
				atk=p1.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p1.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p1.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p1.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p1.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p1);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p1.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p1.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p1.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==2){
		if (d==0){
			while(1){
				atk=p2.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p2.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p2.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p2.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p2.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p2.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p2.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p2.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==3){
		if (d==0){
			while(1){
				atk=p3.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p3.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p3.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p3.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p3.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p3.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p3.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p3.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==4){
		if (d==0){
			while(1){
				atk=p4.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p4.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p4.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p4.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p4.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p4.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p4.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p4.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==5){
		if (d==0){
			while(1){
				atk=p5.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p5.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p5.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p5.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p5.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p5.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p5.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p5.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==6){
		if (d==0){
			while(1){
				atk=p6.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p6.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p6.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p6.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p6.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p6.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p6.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p6.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==7){
		if (d==0){
			while(1){
				atk=p7.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p7.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p7.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p7.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p7.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p7.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p7.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==8){
			while(1){
				atk=p7.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p8.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}
	else if(c==8){
		if (d==0){
			while(1){
				atk=p8.attack(p0);
				hp=p0.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p0.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==1){
			while(1){
				atk=p8.attack(p1);
				hp=p1.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p1.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==2){
			while(1){
				atk=p8.attack(p2);
				hp=p2.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p2.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==3){
			while(1){
				atk=p8.attack(p3);
				hp=p3.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p3.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==4){
			while(1){
				atk=p8.attack(p4);
				hp=p4.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p4.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==5){
			while(1){
				atk=p8.attack(p5);
				hp=p5.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p5.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==6){
			while(1){
				atk=p8.attack(p6);
				hp=p6.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p6.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
		else if(d==7){
			while(1){
				atk=p8.attack(p7);
				hp=p7.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
				atk=p7.attack(p8);
				hp=p8.beattack(atk);
				if(hp<=0){cout<<"dead"<<endl;return 0;}
			}
		}
	}	

}

