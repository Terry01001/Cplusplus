#include<iostream>
using namespace std;

class Temperature{
	public:
		Temperature(double f);
		Temperature();
		double getFah() const;
		//operator overload
		bool operator==(const Temperature T2)const;
		friend ostream& operator<<(ostream& out,const Temperature& T2);
		friend istream& operator>>(istream& in,Temperature& T2);
	private:
		double Fah;
		
};
//constructor
Temperature::Temperature(double f):Fah(f){}
Temperature::Temperature():Fah(0){}
//memberfunc
double Temperature::getFah()const{return Fah;}

//operator overloading
bool Temperature::operator==(const Temperature T2)const{
	return (Fah==T2.getFah());
}
ostream& operator<<(ostream& out,const Temperature& T2){////////----need to be caution
	out<<T2.Fah;
	return out;
}
istream& operator>>(istream& in,Temperature& T2){
	in>>T2.Fah;
	return in;
}

//functions
double Kel(const Temperature& tran){
	double temp;
	temp=(tran.getFah()-32)/1.8+273.15;
	return temp;
}
double Cel(const Temperature& tran){
	double temp;
	temp=(tran.getFah()-32)*5/9;
	return temp;
}


int main(){
	Temperature T1,T2;
	cout<<"Input a temperature1 in Fahrenheit."<<endl;
	cin>>T1;
	cout<<"In Kelvin: "<<Kel(T1)<<endl;
	cout<<"In Celisus: "<<Cel(T1)<<endl;
	cout<<"In Fahrenheit: "<<T1<<endl;
	
	cout<<endl;
	
	cout<<"Input a temperature2 in Fahrenheit."<<endl;
	cin>>T2;
	cout<<"In Kelvin: "<<Kel(T2)<<endl;
	cout<<"In Celisus: "<<Cel(T2)<<endl;
	cout<<"In Fahrenheit: "<<T2<<endl;
	
	cout<<endl;
	
	cout<<"temperature1 == temperature2 : ";
	if(T1==T2)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	
}
