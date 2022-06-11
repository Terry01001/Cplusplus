#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int i;

class digits{
	public:
		digits(string n);
		digits();
		double getd();
		double getd2();
		double getresult();
		void saved2(double n1);
		void save(double num);
	private:
		double d;
		double d2;
		double result;
};
double digits::getd(){return d;}
double digits::getd2(){return d2;}
double digits::getresult(){return result;}
void digits::saved2(double n1){d2=n1;}
void digits::save(double num){result=num;}
class operating{
	public:
		operating(string n);
		operating();
		double operate(double n1,double n2);
		void save(string op);
		string operand;
};
digits::digits(string n){d=int(n);}
digits::digits(){};
operating::operating(string n):operand(n);
void operating::save(string op){operand = op;}
double operating::operate(double n1,double n2){
	if (operand=='+'){return n1+n2;}
	//else if(operand==)
}

int main(){
	string str[50];
	for(i=0;i<50;i++){cin>>str[i];if(str[i]=="EOF"){break;}}//shu ru
	digits init(str[0]);
	operating operand(str[1]);
	init.saved2(((double)str[2]));
	init.save(operand.operate(init.getd(),init.getd2()));
	/*for(i=3;i<50;i++){
		if(str[i]=="EOF"){break;}
		
		if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%'||str[i]=='^'){
			
			i+=1;
		}
		else{
			
		}
	}*/
	
	
	
}
