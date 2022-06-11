#include<iostream>
#include<string>
#include<vector>
using namespace std;
int i;

class Pizza{
	public:
		void computeprice();
		string gettype();
		char getsize();
		void set(const string newtype,const char newsize,int newptop,int newctop);//not used
	private:
		string type;
		char size;
		int p_topping,c_topping;
};
class Order{
	public:
		void showv();
		Pizza m1,m2;
	private:
		vector<Pizza> v;
};

int main(){
	cout<<"There are 2 pizzas in the order."<<endl;
	/*Pizza my1,my2;
	my1.set("handt",'s',0,3);
	my2.set("pan",'l',2,1);
	v.push_back(my1);
	v.push_back(my2);*/
	Order my;
	my.showv();
	
}

void Order::showv(){
	//Pizza m1,m2;
	m1.set("handt",'s',0,3);
	m2.set("pan",'l',2,1);
	v.push_back(m1);
	v.push_back(m2);
	for(i=1;i<=2;i++){
		cout<<v[i];
	}
	
}

string Pizza::gettype(){return type;}
char Pizza::getsize(){return size;}


void Pizza::set(const string newtype,const char newsize,int newptop,int newctop){
	type=newtype;
	size=newsize;
	p_topping=newptop;
	c_topping=newctop;
}

void Pizza::computeprice(){
	int price=0;
	if(size=='s'){
		cout<<"The price of the pizza is : "<<10+(p_topping+c_topping)*2<<endl;
	}
	else if(size=='m'){
		cout<<"The price of the pizza is : "<<14+(p_topping+c_topping)*2<<endl;
	}
	else if(size=='l'){
		cout<<"The price of the pizza is : "<<17+(p_topping+c_topping)*2<<endl;
	}	
}
