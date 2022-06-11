#include<iostream>
using namespace std;

int main(){
	int caffe,cup;
	cout<<"input the caffeine in the drink(milligrams) : ";
	cin>>caffe;
	cup=10000/caffe;
	if(10000%caffe){
		cup=cup+1;
	}
	cout<<"if you drink "<<cup<<" cups of the drink, it will probably kill you."<<endl;
	
}
