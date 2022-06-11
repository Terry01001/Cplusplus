#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;

class calculate{
 public:
  calculate();
  calculate(int num1);
  void input();
  double execute();
 private:
  int number;
  double num[100];
  char sign[100];
  double tempsum;
  int length;
  double ans;
};


class count{
 public:
  count();
  count(char ch, double n1, double n2);
  double exe();
 private:
  double num1;
  double num2;
  char sign;
  double number;
};

//const calculate operator +(const count& num1, const count& num2);
//const calculate operator -(const count& num1, const count& num2);
//const calculate operator *(const count& num1, const count& num2);
//const calculate operator /(const count& num1, const count& num2);
//const calculate operator ^(const count& num1, const count& num2);
//const calculate operator %(const count& num1, const count& num2);


int main(void){
 double answer=0;
 
 int i=0;
 int num;
 cin>>num;

 calculate C1(num);

 C1.input();
 answer=C1.execute();
 cout<<fixed<<setprecision(6)<<answer<<endl;
}

calculate::calculate(){
}

calculate::calculate(int num1):number(num1){
}

count::count():num1(0), num2(0){
}

count::count(char ch, double n1, double n2):sign(ch), num1(n1), num2(n2){
}

void calculate::input(){
 int i=0;
 
 num[0]=number;
 cin>>sign[0];

 for(i=1;i<100;++i){
  cin>>num[i]; 
  cin>>sign[i];  
  if(sign[i]=='E'){
   length=i+1;
   break;
  }
 }
 
 //for(i=0;i<length;++i){
 // cout<<num[i]<<endl;
 // cout<<sign[i]<<endl;
 //}
 
}
double calculate::execute(){
 int i=0;
 double sum=0; 

 for(i=0;i<length-1;++i){     
  count C1(sign[i], num[i], num[i+1]);
  sum=C1.exe();
 
  //cout<<"sum"<<sum<<endl<<endl;

  //cout<<"tempsum"<<tempsum<<endl<<endl;
 
  num[i+1]=sum;

  //cout<<"num[i+1]"<<num[i+1]<<endl<<endl;
 }
 return sum;
}
double count::exe(){
 int i=0;
 int temp=1;
 if(sign=='+'){
  return num1+num2;
 }
 else if(sign=='-'){
  return num1-num2;
 }
 else if(sign=='*'){
  return num1*num2;
 }
 else if(sign=='/'){
  return num1/num2;
 }
 else if(sign=='%'){
  return (int)num1%(int)num2;
 } 
 else if(sign=='^'){
  for(i=0;i<num2;++i){
   temp*=num1;
  }
  return temp;
 }
}
