#include<iostream>
#include<string>
using namespace std;
int count=0;
class info{
	public:
		int getinfo();
		void output();
	private:
		string department,name,studentID,gender;
};
int info::getinfo(void){
		cout<<"Please input student's information"<<endl;
		cout<<"Enter your department(Enter [exit] to leave input):"<<endl;
		cin>>department;
		if(department != "exit"){
			count++;
			cout<<"Enter student name:"<<endl;
			cin>>name;
			cout<<"Enter student id:"<<endl;
			cin>>studentID;
			cout<<"Enter student gender (male/female):"<<endl;
			cin>>gender;
			while(gender!="male" && gender!="female"){
				cout<<"Gender input error,please enter again!"<<endl;
				cin>>gender;
			}
		}
		else{return 0;}
	
	cout<<"Stop Entering"<<endl;
	return 1;
}
void info::output(){
	int i;
	cout<<"<<<The result >>>"<<endl;
	cout<<"Department: "<<department<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Student Id:"<<studentID<<endl;
	cout<<"Gender: "<<gender<<endl<<endl;
	
}
int main(){
	int i,x,co;
	info stu[10];
	for(i=0;i<10;i++){
		x=stu[i].getinfo();
		co=i;
		if(x==0){break;}
	}
	for(i=0;i<co;i++){
		stu[i].output();
	}
}
