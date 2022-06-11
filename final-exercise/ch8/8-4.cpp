#include<iostream>
#include<cstdlib>
using namespace std;
int i;
class chararr{
	public:
		chararr();
		chararr(int sz);
		chararr(int sz,char s);
		int getsize();
		//operator overload
		char& operator[](int index);
	private:
		int size;
		char sign[100];
		
};
//constructor
chararr::chararr():size(10){
	for(i=0;i<10;i++){sign[i]='#';}
}
chararr::chararr(int sz):size(sz){
	if(sz>100){exit(1);}
	for(i=0;i<sz;i++){sign[i]='#';}				//not sure
}
chararr::chararr(int sz,char s):size(sz){
	if(sz>100){exit(1);}
	for(i=0;i<sz;i++){sign[i]=s;}
}
//member funct
int chararr::getsize(){return size;}

//operator overloading
char& chararr::operator[](int index){
	if(index>=size){exit(1);}
	return sign[index];
}
//
int main(){
	chararr init;
	cout<<"Default output(10):";
	
	for(i=0;i<init.getsize();i++){
		cout<<init[i]<<" ";
	}
			//cout<<init[10]<<endl;error test
	cout<<endl<<"Size: "<<init.getsize()<<endl;
	//---------------------------------------------
	cout<<"-----clear array-----"<<endl;
	int num;char sign;
	cout<<"First sz member of the char array to #:";
	cin>>num;
	chararr set(num);
	for(i=0;i<set.getsize();i++){
		cout<<set[i]<<" ";
	}
	cout<<endl<<"Size: "<<set.getsize()<<endl;
	//----------------------------------------------
	cout<<"-----clear array-----"<<endl;
	cout<<"First sz member of the char array to ?:";
	cin>>num>>sign;
	chararr setsign(num,sign);
	for(i =0;i<setsign.getsize();i++){
		cout<<setsign[i]<<" ";
	}
	cout<<endl;
}
