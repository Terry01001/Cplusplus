#include<iostream>
using namespace std;

const double mega=8000;

double file(double rate,double time);


int main(){
	double x,y;
	cout<<"bit rate (kilobits per second) : ";
	cin>>x;
	cout<<"duration of a video clip (minutes) : ";
	cin>>y;
	cout<<"The file size of the video clip : "<<file(x,y)<<endl;
}



double file(double rate,double time){
	double bits;
	bits=rate*time*60;
	return bits/mega;
};
