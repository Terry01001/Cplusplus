#include<iostream>
//#include<cstdlib>
//#include<cmath>
using namespace std;

class Money{
	public:
		//textbook
		Money();
		Money(double amount);
		Money(int thedollars,int thecents);
		Money(int thedollars);
		double getamount() const;
		int getdollars() const;
		int getcents() const;
		//
		const Money percent(int percentfigure) const;
		//operator overload
		const Money operator+(const Money& amount2) const;
		const Money operator-(const Money& amount2) const;
		bool operator==(const Money& amount2) const;
		friend bool operator>=(const Money& amount1,const Money& amount2) ;
		friend bool operator>(const Money& amount1,const Money& amount2) ;
		friend bool operator<=(const Money& amount1,const Money& amount2) ;
		friend bool operator<(const Money& amount1,const Money& amount2) ;
	private:
		//textbook
		int dollars,cents;
		int dollarspart(double amount) const;
		int centspart(double amount)const;
};
//textbook--------------------------------------------------------------------------
int Money::dollarspart(double amount) const{return static_cast<int>(amount);}
int Money::centspart(double amount) const{
	int doublecents=amount*100;
	int intcents=doublecents%100;
	return intcents;
}
//constructor
Money::Money():dollars(0),cents(0){}
Money::Money(double amount):dollars(dollarspart(amount)),cents(centspart(amount)){}
Money::Money(int thedollars):dollars(dollars),cents(0){}
Money::Money(int thedollars,int thecents):dollars(thedollars),cents(thecents){}
//memberfunct
double Money::getamount() const{return dollars+cents*0.01;}
int Money::getdollars() const{return dollars;}
int Money::getcents() const{return cents;}
//-----------------------------------------------------------------------------------
const Money Money::percent(int percentfigure) const{
	return Money((getamount())*percentfigure/100);
}
//operator overloading
bool Money::operator==(const Money& amount2) const{return (getamount()==amount2.getamount());}
const Money Money::operator+(const Money& amount2) const{
	int totdollar=dollars+amount2.getdollars();
	int totcent=cents+amount2.getcents();
	return Money(totdollar,totcent);
}
const Money Money::operator-(const Money& amount2) const{
	double difamount=getamount()-amount2.getamount();
	return Money(difamount);
}
//friend operator overloading
bool operator>=(const Money& amount1,const Money& amount2){return (amount1.getamount()>=amount2.getamount());}
bool operator>(const Money& amount1,const Money &amount2){return (amount1.getamount()>amount2.getamount());}
bool operator<=(const Money& amount1,const Money& amount2){return (amount1.getamount()<=amount2.getamount());}
bool operator<(const Money& amount1,const Money& amount2){return (amount1.getamount()<amount2.getamount());}
//

int main(){
	double youramount;
	int percentf;
	cout<<"Enter an amount of money: $";
	cin>>youramount;
	cout<<"Enter a percent you wish to take of your amount: ";
	cin>>percentf;
	Money yours(youramount),mine(10.09);
	cout<<"Your amount is $"<<yours.getamount()<<endl;
	cout<<"My amount is $"<<mine.getamount()<<endl;
	Money you=yours.percent(percentf);Money my=mine.percent(15);//give a name for annoymous object
	
	cout<<percentf<<"% of your amount is $"<<you.getamount()<<endl;
	cout<<"15% of my amount is $"<<my.getamount()<<endl;
//yellow section
	Money sum=yours+mine;Money sub=yours-mine;
	if(yours==mine){
		cout<<"our money is the same"<<endl;
		cout<<"$"<<yours.getamount()<<" + $"<<mine.getamount()<<" equals $"<<sum.getamount()<<endl;
		cout<<"$"<<yours.getamount()<<" - $"<<mine.getamount()<<" equals $"<<sub.getamount()<<endl;
	}
	else{
		//Money sum=yours+mine;Money sub=yours-mine;
		cout<<"One of us is richer"<<endl;
		cout<<"$"<<yours.getamount()<<" + $"<<mine.getamount()<<" equals $"<<sum.getamount()<<endl;
		cout<<"$"<<yours.getamount()<<" - $"<<mine.getamount()<<" equals $"<<sub.getamount()<<endl;
	}
//green section
	cout<<"Your amount is $"<<yours.getamount()<<endl;
	cout<<"My amount is $"<<mine.getamount()<<endl;
	if(yours >= mine){cout<<"Your amount is greater than or equal to my amount."<<endl;}
	else{cout<<"Your amount is less than my amount"<<endl;}
	if(sum>sub){cout<<"The sum of our amounts is greater than the difference."<<endl;}
	else{cout<<"The sum of our amounts is less than or equal to the difference."<<endl;}
	if(yours<=mine){cout<<"Your amount is less than or equal to my amount"<<endl;}
	else{cout<<"Your amount is greater than my amount"<<endl;}
	if(sum < sub){cout<<"The sum of our amounts is less than the difference."<<endl;}
	else{cout<<"The sum of our amounts is greater than or equal to the difference."<<endl;}
	return 0;
}
