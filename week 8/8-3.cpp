#include<iostream>
#include<cstring>
using namespace std;

class date
{
 public:
  date(int y,int m,int d);
  void output();
  int getyear() const;
  int getmonth() const;
  int getday() const;
  int total() const;
  const int operator - (const date& d2) const;
 private:
  int year,month,day;

};


date::date(int y,int m,int d):year(y), month(m), day(d){
}

void date::output()
{
 cout<<year<<" / "<<month<<" / "<<day;
}

int date::getyear() const
{
 return (year);
}

int date::getmonth() const
{
 return (month);
}

int date::getday() const
{
 return (day);
}

int date::total() const
{
 int t=0; 
 if(month==1)
  t=day;
 else if(month==2)
  t=31+day;
 else if(month==3)
  t=31+28+day;
 else if(month==4)
  t=31+28+31+day;
 else if(month==5)
  t=31+28+31+30+day;
 else if(month==6)
  t=31+28+31+30+31+day;
 else if(month==7)
  t=31+28+31+30+31+30+day;
 else if(month==8)
  t=31+28+31+30+31+30+31+day;
 else if(month==9)
  t=31+28+31+30+31+30+31+31+day;
 else if(month==10)
  t=31+28+31+30+31+30+31+31+30+day;
 else if(month==11)
  t=31+28+31+30+31+30+31+31+30+31+day;
 else if(month==12)
  t=31+28+31+30+31+30+31+31+30+31+30+day;

 return (t);
}


const int date::operator - (const date& d2) const
{
 int t1=total();
 int t2=d2.total();
 int d2year=d2.getyear(); 
 int d2month=d2.getmonth();
 int d2day=d2.getday();
 int day; 
 
 if(year==d2year && month<d2month)
  day=t2-t1;
 else if(year==d2year && month>d2month)
  day=t1-t2;
 else if(year<d2year && month<d2month)
  day=(d2year-year)*365+(t2-t1);
 else if(year<d2year && month>d2month)
  day=(d2year-year-1)*365+(365-t1)+t2;
 else if(year>d2year && month<d2month)
  day=(year-d2year-1)*365+(365-t2)+t1;
 else if(year>d2year && month>d2month)
  day=(year-d2year)*365+(t1-t2);

 return (day);



}

  
 




 



int main(void)
{
 int y,m,d; 
 cout<<"Please enter 2 dates to test:"<<endl;
 cout<<"Enter the date1 : ";
 cin>>y>>m>>d;
 date d1(y,m,d);
 cout<<"Enter the date2 : ";
 cin>>y>>m>>d;
 date d2(y,m,d);
 

 int day=d1-d2;
 cout<<"From ";
 d1.output();
 cout<<" to ";
 d2.output();
 cout<<": "<<day<<" days"<<endl;

}
