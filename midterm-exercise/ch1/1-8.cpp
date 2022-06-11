#include<iostream>
#include<iomanip>
using namespace std;



int main(){
	double n,guess,r;
	double test;//my test
	int i;
	int x;//my test
	cout<<"key in number n : ";
	cin>>n;
	guess=n/2.0;
	for(i=1;i<=5;i++){
		r=n/guess;
		guess=(guess+r)/2.0;
	}
	cout<<"the square root approximately equals "<<setiosflags(ios::fixed)<<setprecision(2)<<guess<<endl;
	cout<<"change type(key number): ";
	cin>>test;
	x=int(test);
	cout<<"after change type : "<<x<<endl;
	
}
