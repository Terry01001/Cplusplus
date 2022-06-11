#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

class info{
	public:
		info(string department,string name,string studentID,string gender);
		void output();
	private:
		string department,name,studentID,gender;
};
info::info(string department,string name,string studentID,string gender)
						:department(department),name(name),studentID(studentID),gender(gender)
						{}
void info::output(){
	cout<<"<<<The result >>>"<<endl;
	cout<<"Department: "<<department<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Student Id:"<<studentID<<endl;
	cout<<"Gender: "<<gender<<endl<<endl;
	
}
int main(){
	string department,name,studentID,gender;
	cout<<"Please input student's information"<<endl;
	cout<<"Enter your department:"<<endl;
	cin>>department;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your student id:"<<endl;
	cin>>studentID;
	cout<<"Enter your gender (male/female):"<<endl;
	cin>>gender;
	while(gender!="male" && gender!="female"){
		cout<<"Gender input error,please enter again!"<<endl;
		cin>>gender;
	}
	info yours(department,name,studentID,gender);
	yours.output();
}
