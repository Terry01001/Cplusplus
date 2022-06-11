#include <iostream>
using namespace std;

class ATMCard{
 public:
  ATMCard(int psw, int money);
  int getpassword();
  int getremain();
  void setremain(int money);
 private:
  int password;
  int remain;
};

class ATM{
 public: 
  void putcard(ATMCard& C);
  void login(ATMCard& C);
  void posit(ATMCard& C);
  void withdraw(ATMCard& C);
  void search(ATMCard& C);
  void logout(ATMCard& C);
};


int main(void){
 ATMCard C1(1234, 10000);
 ATMCard C2(123456, 20000);

 ATM A;

 A.putcard(C1);
 A.putcard(C2);
}

ATMCard::ATMCard(int psw, int money):password(psw), remain(money){
}

int ATMCard::getpassword(){
 return password;
}

int ATMCard::getremain(){
 return remain;
}

void ATMCard::setremain(int money){
 remain+=money;
}

void ATM::putcard(ATMCard& C){
 int log;
 int psw;
 int num; 
 int remainmoney;

 cout<<"Please input your card password: ";
 cin>>num;
 psw=C.getpassword();
 if(num==psw){
  login(C);
 }
 else{
  cout<<"Not log in!"<<endl; 
 }
}
void ATM::login(ATMCard& C){
 int choice;
 int remainmoney;

 remainmoney=C.getremain(); 

 cout<<"Enter 1 to save money"<<endl;
 cout<<"Enter 2 to withdraw money"<<endl;
 cout<<"Enter 3 to check balances"<<endl;
 cout<<"Enter -1 to end your action"<<endl;
 cin>>choice;

 while(choice!=-1){
  if(choice==1){
   posit(C);
  }
  else if(choice==2){
   withdraw(C);
  }
  else if(choice==3){
   search(C);  
  }
  cout<<"Enter 1 to save money"<<endl;
  cout<<"Enter 2 to withdraw money"<<endl;
  cout<<"Enter 3 to check balances"<<endl;
  cout<<"Enter -1 to end your action"<<endl;
  cin>>choice;
 }
 if(choice==-1){
  logout(C);
 } 
}
void ATM::logout(ATMCard& C){
 cout<<"Logout!"<<endl;
}
void ATM::posit(ATMCard& C){
 int amount; 
 cout<<"Enter how much money you want to deposit: ";
 cin>>amount;
 C.setremain(amount);
}
void ATM::withdraw(ATMCard& C){
 int amount;
 int remain;

 remain=C.getremain(); 
 cout<<"Enter how much money you want to take out: "<<endl;
 cin>>amount;
 if(amount>remain){
  cout<<"You don't have so much many to take out!!"<<endl;
 }
 else{
  amount=-amount;
  C.setremain(amount);
 }
}
void ATM::search(ATMCard& C){
 int amount;
 amount=C.getremain();
 cout<<amount<<endl;
}
