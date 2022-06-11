#include<iostream>
#include<cstdlib>
using namespace std;

class pocket{
	public:
		pocket(int one,int five,int ten);
		int getone();
		int getfive();
		int getten();
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
int pocket::getone(){return one;}
int pocket::getfive(){return five;}
int pocket::getten(){return ten;}
int main(){
	int one,five,ten,deposit,cost;
	cout<<"How many one-dollar coins ? "<<endl;
	cin>>one;
	cout<<"How many five-dollar coins ? "<<endl;
	cin>>five;
	cout<<"How many ten-dollar coins ? "<<endl;
	cin>>ten;
	pocket my(one,five,ten);
	deposit=my.setmoney(one,five,ten);
	cout<<"You have : "<<deposit<<" dollars."<<endl;
	cout<<"How much did you pay by cash ?"<<endl;
	cin>>cost;
	if(cost<deposit){
		if(cost>one){//one dollar bu gou fu
			cost-=one;
			one =0;
			if(cost>(5*five)){//hai bu gou
				cost-=5*five;
				five=0;
				if((cost%10) == 0){ten-=(cost/10);}//shi kuai yi ding gou fu
				else{
					ten-=((cost/10)+1);
					five+=((10-(cost%10))/5);
					one+=((10-(cost%10))%5);
				}
			}
			else{//gou fu
				if(cost%5==0){five-=(cost/5);}
				else{
					five-=((cost/5)+1);
					one+=5-cost%5;
				}
			}
		}
		else{one-=cost;}
		cout<<"Remain : one dollar: "<<one<<";"<<"five dollars :"<<five<<"; ten dollars:"<<ten<<endl;
		cout<<"total"<<my.setmoney(one,five,ten)<<endl;
	}
	else{cout<<"Insufficiency!"<<endl;}
}
