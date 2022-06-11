#include<iostream>
#include<string>
using namespace std;

class Date{
	public:
	void output();
	void input();
	int getyear();
	int getmonth();
	int getday();
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
void operator>(Date d1,Date d2){
	if( d1.getyear() > d2.getyear() ){
		d1.output();
		cout<<" > ";
		d2.output();
	}
	else if(d1.getyear() == d2.getyear() ){
		if(d1.getmonth() > d2.getmonth() ){
			d1.output();
			cout<<" > ";
			d2.output();
		}
		else if(d1.getmonth() == d2.getmonth() ){
			if(d1.getday() > d2.getday() ){
				d1.output();
				cout<<" > ";
				d2.output();
			}
		}
	}
}
void operator<(Date d1,Date d2){
	if( d1.getyear() < d2.getyear() ){
		d1.output();
		cout<<" < ";
		d2.output();
	}
	else if(d1.getyear() == d2.getyear() ){
		if(d1.getmonth() < d2.getmonth() ){
			d1.output();
			cout<<" < ";
			d2.output();
		}
		else if(d1.getmonth() == d2.getmonth() ){
			if(d1.getday() < d2.getday() ){
				d1.output();
				cout<<" < ";
				d2.output();
			}
		}
	}
}
void operator ==(Date d1,Date d2){
	if( d1.getyear() == d2.getyear() ){
		if(d1.getmonth()==d2.getmonth()){
			if(d1.getday()==d2.getday()){
				d1.output();
				cout<<" = ";
				d2.output();
			}
		}
	}
}
int main(){
	cout<<"Please enter 3 dates to test:"<<endl;
	Date date1,date2,date3;
	cout<<"date1: ";
	date1.input();
	cout<<"date2: ";
	date2.input();
	cout<<"date3: ";
	date3.input();
	cout<<"date1: ";
	date1.output();
	cout<<endl<<"date2: ";
	date2.output();
	cout<<endl<<"date3: ";
	date3.output();
	cout<<endl;
	cout<<"Choose two dates to compare (> , < , =):";
	string s1,s2;
	cin>>s1>>s2;
	if(s1=="date1"&&s2=="date2"){date1 > date2;date1 < date2;date1==date2;}
	else if(s1=="date1"&&s2=="date3"){date1 > date3;date1 < date3;date1==date3;}
	else if(s1=="date2"&&s2=="date1"){date2 > date1;date2 < date1;date2==date1;}
	else if(s1=="date2"&&s2=="date3"){date2 > date3;date2 < date3;date2==date3;}
	else if(s1=="date3"&&s2=="date1"){date3 > date1;date3 < date1;date3==date1;}
	else if(s1=="date3"&&s2=="date2"){date3 > date2;date3 < date2;date3==date2;}
	cout<<endl;

}
