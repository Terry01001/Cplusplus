#include<iostream>
using namespace std;

class weight{
	public:
		void setweightpounds(double p);
		void setweightkilograms(double k);
		void setweightounces(double o);
		double getpounds();
		double getkilo();
		double getounces();
		//void input();
		void output();
		void trans();
	private:
		double kilo;
		double pounds;
		double ounces;
};

int main(){
	weight wei;
	//wei.input();
	cout<<"Set kilograms=60"<<endl;
	wei.setweightkilograms(60);
	cout<<"> "<<"In Kilograms: "<<60<<endl;
	cout<<"> "<<"In Pounds: "<<60*2.21<<endl;
	cout<<"> "<<"In Ounces: "<<60*2.21*16<<endl;
	
	cout<<"Set Pounds=110"<<endl;
	wei.setweightpounds(110);
	cout<<"> "<<"In Kilograms: "<<110/2.21<<endl;
	cout<<"> "<<"In Pounds: "<<110<<endl;
	cout<<"> "<<"In Ounces: "<<110*16<<endl;
	
	cout<<"Set Ounces=1800"<<endl;
	wei.setweightounces(1800);
	cout<<"> "<<"In Kilograms: "<<1800/16/2.21<<endl;
	cout<<"> "<<"In Pounds: "<<1800/16<<endl;
	cout<<"> "<<"In Ounces: "<<1800<<endl;
	
	
	
	
	/*
	cout<<"-----------------------"<<endl;
	cout<<"OK ,test done ! Let's set some value."<<endl;
	wei.setweightpounds(1.5);
	wei.setweightkilograms(5);
	wei.setweightounces(16);
	wei.output();
	cout<<"test 2 done .let's transfer from kilo to ounces. "<<endl;
	wei.trans();*/
}

double weight::getpounds(){return pounds;}
double weight::getkilo(){return kilo;}
double weight::getounces(){return ounces;}

/*void weight::input(){
	cout<<"enter the kilograms.";
	cin>>kilo;
	cout<<"enter the pounds.";
	cin>>pounds;
	cout<<"enter the ounces.";
	cin>>ounces;
}*/
void weight::output(){
	cout<<"The kilogranms in class is"<<kilo<<endl;
	cout<<"The pounds in class is"<<pounds<<endl;
	cout<<"The ounces in class is"<<ounces<<endl;
}
void weight::setweightpounds(double p){
	pounds=p;
}
void weight::setweightkilograms(double k){
	kilo=k;
}
void weight::setweightounces(double o){
	ounces=o;
}
void weight::trans(){
	cout<<kilo<<" kilogram(s) equals "<<kilo*2.21*16<<" ounces."<<endl;
}
