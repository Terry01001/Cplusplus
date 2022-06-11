#include<iostream>
#include<vector>
#include<string>
using namespace std;
int i;

class BoxOfProduce{
	public:
		BoxOfProduce();
		BoxOfProduce(vector<string> a);
		string get(int index) const;
		int getsize()const;
		void set(string s);
		void output() const;
		//operator overload
		const BoxOfProduce operator+(const BoxOfProduce& box);
		
	private:
		vector<string> fruits;
};
//constructor
BoxOfProduce::BoxOfProduce(){};
BoxOfProduce::BoxOfProduce(vector<string> a):fruits(a){};
//get set 
int BoxOfProduce::getsize()const{return fruits.size();}
string BoxOfProduce::get(int index)const{return fruits[index];}
void BoxOfProduce::set(string s){fruits.push_back(s);}

//memfunc
void BoxOfProduce::output()const{
	for(i=0;i<fruits.size();i++){
		cout<<"("<<i+1<<")"<<fruits[i]<<" ";
	}
}

//operator overload
const BoxOfProduce BoxOfProduce::operator+(const BoxOfProduce& box){
	int size=box.getsize();
	for(i=0;i<size;i++){
		fruits.push_back(box.get(i));
	}
	return BoxOfProduce(fruits);
}

int main(){
	BoxOfProduce b1,b2;
	cout<<"The box contains: ";
	b1.set("Kiwi");b1.set("Kale");
	b1.output();
	cout<<endl;
	
	cout<<"The box contains: ";
	b2.set("Tomato");b2.set("Kiwi");b2.set("Tomato");b2.set("Tomatillo");
	b2.output();
	cout<<endl;
	
	cout<<"The box contains: ";
	BoxOfProduce sum = b1+b2;
	sum.output();
	
	cout<<endl;
	
}
