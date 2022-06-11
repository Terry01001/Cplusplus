#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Date{
 public:
  Date();
  Date(int y, int m, int d);
  int getyear() const;
  int getmonth() const;
  int getday() const;
  void output();
 private:
  int year;
  int month;
  int day;
};

const Date operator +(const Date& date1, int amount);

int main(void){
 int year, month, day;
 string choose1;
 int amount;

 cout<<"Please enter 3 dates to test:"<<endl;
 cout<<"Enter the date1: ";
 cin>>year;
 cin>>month;
 cin>>day;
 Date date1(year, month, day);
 cout<<"Enter the date2: ";
 cin>>year;
 cin>>month;
 cin>>day;
 Date date2(year, month, day);
 cout<<"Enter the date3: ";
 cin>>year;
 cin>>month;
 cin>>day;
 Date date3(year, month, day);
 
 cout<<"date1: ";date1.output();
 cout<<"date2: ";date2.output();
 cout<<"date3: ";date3.output();
 
 cout<<"Choose a date to add (+): ";
 cin>>choose1;
 cout<<" + ";
 cin>>amount;
 if(choose1=="date1"){
  Date newDate=date1+amount;
  newDate.output();
 }
 if(choose1=="date2"){
  Date newDate=date2+amount;
  newDate.output();
 }
 if(choose1=="date3"){
  Date newDate=date3+amount;
  newDate.output();
 }
}
Date::Date(){
}
Date::Date(int y, int m, int d):year(y),month(m),day(d){
}
int Date::getyear() const{
 return year;
}
int Date::getmonth() const{
 return month;
}
int Date::getday() const{
 return day;
}
void Date::output(){
 cout<<year<<" / "<<month<<" / "<<day<<endl;
}
const Date operator +(const Date& date1, int amount){
 int year1=date1.getyear();
 int month1=date1.getmonth();
 int day1=date1.getday();
 
 day1+=amount;
 while(day1>28){
  if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12){
   if(day1<=31){
    return Date(year1, month1, day1);
   }
   else if(day1>31){
    day1-=31;
    month1+=1;
    if(month1>12){
     year1+=1;
     month1=1;    
    }  
   }
  }
  else if(month1==2){
   day1-=28;
   month1+=1;  
  }
  else{
   if(day1<=30){
    return Date(year1, month1, day1);
   }
   else if(day1>30){
    day1-=30;
    month1+=1;
    if(month1>12){
     year1+=1;
     month1=1;    
    }  
   }
  }
 }

 //original>28,and finish calculate
 return Date(year1, month1, day1);
}
