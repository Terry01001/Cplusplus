#include<iostream>
#include<cstdlib>
using namespace std;

class Date{
	public:
	void output();
	void input();
	int getyear();
	int getmonth();
	int getday();
	int operator-(Date d2);
	private:
	int year;
	int month;
	int day;
};
int Date::getyear(){return year;}
int Date::getmonth(){return month;}
int Date::getday(){return day;}
void Date::input(){cin>>year>>month>>day;}
void Date::output(){cout<<year<<" / "<<month<<" / "<<day;}
//overload operator
int Date::operator-(Date d2){
	int difyear=year-d2.getyear(),difmonth,difday;
	if(month>d2.getmonth()){
		if(day>d2.getday()){
			difmonth=month-d2.getmonth();
			difday=day-d2.getday();
		}
		else{
			difmonth=month-1-d2.getmonth();
			difday=day+30-d2.getday();
		}
	}
	else{
		difmonth=12-month+d2.getmonth();
		difday=30-day+d2.getday();
	}
	return difyear*365+difmonth*31+difday;
	
}
//
int operator>(Date d1,Date d2){
	if( d1.getyear() > d2.getyear() ){
		return 1;
	}
	else if(d1.getyear() == d2.getyear() ){
		if(d1.getmonth() > d2.getmonth() ){
			return 1;
		}
		else if(d1.getmonth() == d2.getmonth() ){
			if(d1.getday() > d2.getday() ){
				return 1;
			}
		}
	}
	return 0;
}
//
int main(){
	cout<<"Please enter 2 dates to test:"<<endl;
	Date date1,date2;
	cout<<"date1: ";
	date1.input();
	cout<<"date2: ";
	date2.input();
	cout<<"From ";
	date1.output();
	cout<<" to ";
	date2.output();
	cout<<": ";
	if(date1>date2){
		cout<< date1-date2<<"day(s)"<<endl;
	}
	else{
		cout<< date2-date1<<"day(s)"<<endl;
	}
	
	
}
