#include<iostream>
#include<cstdlib>
using namespace std;

class pocket{
	public:
		pocket(int one,int five,int ten);
		int getmoney();
		int setmoney(int one,int five,int ten);
	private:
		int one,five,ten;
};
pocket::pocket(int one,int five,int ten)
				:one(one),five(five),ten(ten)
				{}
int pocket::setmoney(int one,int five,int ten){
	return one+5*five+10*ten;
}
int main(){
	int one,five,ten;
	cout<<"How many one-dollar coins ? "<<endl;
	cin>>one;
	cout<<"How many five-dollar coins ? "<<endl;
	cin>>five;
	cout<<"How many ten-dollar coins ? "<<endl;
	cin>>ten;
	pocket my(one,five,ten);
	cout<<"You have : "<<my.setmoney(one,five,ten)<<" dollars."<<endl;
}
