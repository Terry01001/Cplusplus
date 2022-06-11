#include<iostream>
#include<string>
using namespace std;

class Pizza{
	public:
		void outputDescription();
		void input();
		void computeprice();
		string gettype();
		char getsize();
		int gettopping();
		void set(string newtype,char newsize,int newtop);//not used
	private:
		string type;
		char size;
		int topping;
};

int main(){
	//string a,b;
	//int c;
	cout<<"Small pizza = $10 + $2 per topping"<<endl;
	cout<<"Mediun pizza = $14 + $2 per topping"<<endl;
	cout<<"Large pizza = $17 + $2 per topping"<<endl<<endl;
	
	Pizza my;
	my.input();
	my.outputDescription();
	my.computeprice();
	/*cout<<"ok! test done.Let's set our pizza to handtossed,large,6 toppings."<<endl;
	cout<<"Let's see outcome : "<<endl;
	my.set("handtossed","large", 6 );
	my.outputDescription();
	*/
}

string Pizza::gettype(){return type;}
char Pizza::getsize(){return size;}
int Pizza::gettopping(){return topping;}
void Pizza::set(string newtype,char newsize,int newtop){
	type=newtype;
	size=newsize;
	topping=newtop;
}

void Pizza::input(){
	cout<<"Enter the type of pizza: (deep dish-deepd,hand tossed-handt,pan-pan):";
	cin>>type;
	cout<<"Enter the size of the pizza: (small-s,medium-m,large-l)";
	cin>>size;
	cout<<"Enter the number of the cheese toppings : ";
	cin>>topping;
	cout<<endl;
}

void Pizza::outputDescription(){
	cout<<"Pizza type : "<<type<<endl;
	cout<<"Number of pepperoni or cheese is :"<<topping<<endl;
	cout<<"Size of pizza: "<<size<<endl;
	cout<<".............."<<endl;
}
void Pizza::computeprice(){
	int price=0;
	if(size=='s'){
		cout<<"The price of the pizza is : "<<10+topping*2<<endl;
	}
	else if(size=='m'){
		cout<<"The price of the pizza is : "<<14+topping*2<<endl;
	}
	else if(size=='l'){
		cout<<"The price of the pizza is : "<<17+topping*2<<endl;
	}	
}
