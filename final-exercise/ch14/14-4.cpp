#include<iostream>
#include<string>
using namespace std;

class UniversityStaff{
	public:
		UniversityStaff();
		UniversityStaff(string theName);
		UniversityStaff(const UniversityStaff& theObject);
		string getName()const;
		UniversityStaff& operator=(const UniversityStaff& rtSide);
		friend istream& operator>>(istream& instream,UniversityStaff& staffobject);
		friend ostream& operator<<(ostream& outstream,UniversityStaff& staffobject);
	private:
		string name;
};
class Student{
	public:
		Student();
		Student(string n,int num,UniversityStaff& p);
		string getuname()const;
		int getnum() const;
		UniversityStaff getUS()const;
		//void input();
		void output() const;
		Student(const Student& object);
		Student& operator=(const Student& rside);
	private:
		string uname;
		int number;
		UniversityStaff person;
};
class ScienceStudent:public Student
{
	public:
		ScienceStudent();
		ScienceStudent(string n,int num,UniversityStaff& p,string subject,string situation);
		void output()const;
	private:
		string dis;
		string course;
};
//constructor
UniversityStaff::UniversityStaff(){}
UniversityStaff::UniversityStaff(string theName):name(theName){}
//memfunct and friend funct
string UniversityStaff::getName()const{return name;}
istream& operator>>(istream& instream,UniversityStaff& staffobject){
	instream >> staffobject.name;
	return instream;
}
ostream& operator<<(ostream& outstream,UniversityStaff& staffobject){
	outstream << staffobject.name;
	return outstream;
}
//copy constructor and assignment overload
UniversityStaff::UniversityStaff(const UniversityStaff& theObject):name(theObject.name){}
UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtside){
	name=rtside.name;
	return *this;
}
//STUDENT-----------------------------------------------base class
Student::Student(){}
Student::Student(string n,int num,UniversityStaff& p):uname(n),number(num){
	person = p;
}
//memfunct
string Student::getuname()const{return uname;}
int Student::getnum() const{return number;}
UniversityStaff Student::getUS()const{return person;}
void Student::output()const{cout<<uname<<endl<<number<<endl<<person.getName()<<endl;}
//copy constructor and assignment overload
Student::Student(const Student& object)
	:uname(object.uname),number(object.number),person(object.person){}
Student& Student::operator=(const Student& rside){
	uname=rside.uname;
	number=rside.number;
	person=rside.person;
	return *this;
}
//subclass---------------------------------------------------------derived class
ScienceStudent::ScienceStudent(){}
ScienceStudent::ScienceStudent(string n,int num,UniversityStaff& p,string subject,string situation):Student(n,num,p),dis(subject),course(situation){}

void ScienceStudent::output() const{
	cout<<getuname()<<endl<<getnum()<<endl<<getUS().getName()<<endl<<dis<<endl<<course<<endl;
}
//won't inherit copyconstruct assignment need to write it

int main(){
	string uni;
	int num;
	UniversityStaff s1;
	cout<<"key in info:"<<endl;
	cin>>uni;
	cin>>num;
	cin>>s1;
	
	Student st1(uni,num,s1);
	
	cout<<endl;
	
	cout<<"Student Test1(constructed) Data:"<<endl;
	st1.output();
	cout<<endl;
	
	cout<<"Student Test2(assigned)Data:"<<endl;
	Student stt1 = st1;
	stt1.output();
	cout<<endl;
	
	cout<<"Student Test2(copy constructed)Data:"<<endl;
	Student stt2(st1);
	stt2.output();
	cout<<endl;	
		
		
	cout<<"key in sciencestu info:"<<endl;
	UniversityStaff s2;
	cin>>uni;
	cin>>num;
	cin>>s2;
	string str1,str2;
	cin>>str1>>str2;
	cout<<endl;
	
	
	cout<<"ScienceStudent Test1(constructed)Data:"<<endl;
	ScienceStudent sst1(uni,num,s2,str1,str2);
	sst1.output();
	cout<<endl;
	
	cout<<"ScienceStudent Test2(assigned)Data:"<<endl;
	ScienceStudent sst2 = sst1;
	sst2.output();
	cout<<endl;
	
	cout<<"ScienceStudent Test2(copy constructed)Data:"<<endl;
	ScienceStudent sstt(sst1);
	sstt.output();
	cout<<endl;
	
}
