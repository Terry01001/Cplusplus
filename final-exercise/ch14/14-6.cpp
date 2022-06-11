#include<iostream>
#include<string>
using namespace std;

class Payment{
	public:
		Payment();
		Payment(float num);
		float getamount()const;
		void setamount(float num);
		void paymentDetails();
	private:
		float amount;
};
class CashPayment:public Payment
{
	public:
		CashPayment();
		CashPayment(float num);
		void paymentDetails();
};
class CreditCardPayment:public Payment
{
	public:
		CreditCardPayment();
		CreditCardPayment(float num,string n,string exp,int number);
		void paymentDetails();
	private:
		string name;
		string expire;
		int card_number;
};
//constructor
Payment::Payment(){}
Payment::Payment(float num):amount(num){}
//memfunct
float Payment::getamount()const{return amount;}
void Payment::setamount(float num){amount = num;}
void Payment::paymentDetails(){
	cout<<"The payment amount is "<<amount<<endl;
}
//subclass constructor
CashPayment::CashPayment(){}
CashPayment::CashPayment(float num):Payment(num){}
void CashPayment::paymentDetails(){
	cout<<"The cash payment amount is "<< getamount()<<endl;
}
//
CreditCardPayment::CreditCardPayment(){}
CreditCardPayment::CreditCardPayment(float num,string n,string exp,int number)
	:Payment(num),name(n),expire(exp),card_number(number)
	{}
void CreditCardPayment::paymentDetails(){
	cout<<"The credit payment amount is: "<<getamount()<<endl;
	cout<<"The name on the credit card is: "<<name<<endl;
	cout<<"The expiration dat is: "<<expire<<endl;
	cout<<"The credit card number is: "<<card_number<<endl;
}

int main(){
	CashPayment cash1(50.5),cash2(20.45);
	CreditCardPayment credit1(10.5,"Fred","10/5/2010",123456789),credit2(100,"Barney","11/15/2009",987654321);
	
	cout<<"Cash 1 details:"<<endl;
	cash1.paymentDetails();
	cout<<endl;
	
	cout<<"Cash 2 details:"<<endl;
	cash2.paymentDetails();
	cout<<endl;
	
	cout<<"Credit 1 details:"<<endl;
	credit1.paymentDetails();
	cout<<endl;
	
	cout<<"Credit 2 details:"<<endl;
	credit2.paymentDetails();
	
	
}
