#include<iostream>
#include<string>
using namespace std;

class Date{
	public:
	Date();
	Date(int y,int m,int d);
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
//constrictor
Date::Date(int y,int m,int d):year(y),month(m),day(d){};
Date::Date(){};
//
int Date::getyear(){return year;}
int Date::getmonth(){return month;}
int Date::getday(){return day;}
void Date::input(){cin>>year>>month>>day;}
void Date::output(){cout<<year<<" / "<<month<<" / "<<day;}
//overload operator
const Date operator +(Date d1,int num){
	int newday=d1.getday(),newyear=d1.getyear(),newmonth=d1.getmonth();
	if(d1.getmonth()==1){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==2){
		newday+=num;
		if(newday>=28){
			newday-=28;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==3){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==4){
		newday+=num;
		if(newday>=30){
			newday-=30;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==5){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==6){
		newday+=num;
		if(newday>=30){
			newday-=30;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==7){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==8){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==9){
		newday+=num;
		if(newday>=30){
			newday-=30;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==10){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==11){
		newday+=num;
		if(newday>=30){
			newday-=30;
			newmonth+=1;
		}
		return Date(newyear,newmonth,newday);
	}
	else if(d1.getmonth()==12){
		newday+=num;
		if(newday>=31){
			newday-=31;
			newmonth=1;
			newyear+=1;
		}
		return Date(newyear,newmonth,newday);
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
	cout<<"choose a date to add (+):";
	string s1,s2;
	int s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	if(s1=="date1"){
		Date newdate=date1 + s3;
		newdate.output();
		cout<<endl;
	}
	else if(s1=="date2"){
		Date newdate=date2 + s3;
		newdate.output();
		cout<<endl;
	}
	else if(s1=="date3"){
		Date newdate=date3 + s3;
		newdate.output();
		cout<<endl;
	}
}
