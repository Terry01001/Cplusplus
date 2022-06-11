#include<iostream>
#include<bool>
using namespace std;

class ATM{
	public:
		bool log;
		bool login(int password);
		void save();
		void withdraw();
		void check();
		void logout();
	private:
		//bool log;
};
void ATM::save(){
	int m;
	cout<<"ENter how much money you want to deposit:";
	cin>>m;
	balance+=m;
}
void ATM::withdraw(){
	int m;
	cout<<"Enter how much money you want to take out:";
	cin>>m;
	balance-=m; 
}
void ATM::check(){cout<<balance<<endl;}
void ATM::logout(){cout<<"Logout!"<<endl;}
class ATMCard{
	public:
		ATM a1;
		ATMCard(int password,int balance);
		ATMCard();
		int getp();// mi ma
		int get();//yu e
		void set();//yu e
	private:
		int password;
		int balance;
};
ATMCard::ATMCard(int password,int balance):password(password),balance(balance){};
ATMCard::ATMCard(){};
int ATMCard::getp(){return password;}

int main(){
	ATMCard card1(1234,1000),card2(123456,10000);
	int password,choice;
	cout<<"Please enter your card password: ";
	cin>>password;
	if(password==card1.getp()){
		card1.a1.log=TRUE;
		cout<<"Login!"<<endl;
		while(card1.a1.log==TRUE){
			cout<<"Enter 1 to save money"<<endl;
			cout<<"Enter 2 to withdraw money"<<endl;
			cout<<"Enter 3 to check balances"<<endl;
			cout<<"Enter -1 to end your action"<<endl;
			cin>>choice;
			if(choice==1){card1.a1.save();}
			else if(choice==2){card1.a1.withdraw();}
			else if(choice==3){card1.a1.check();}
			else if (choice==-1){card1.a1.logout();break;}
		}
		
	}
	
		
}
