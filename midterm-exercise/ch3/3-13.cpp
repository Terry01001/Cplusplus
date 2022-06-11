#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int choose(void){
	return rand()%25+1;
};

int main(){
	srand(time(NULL));
	int n1,n2,n3,n4;
	n1=choose();
	n2=choose();
	while(n2==n1){n2=choose();}
	n3=choose();
	while(n3==n2||n3==n1){n3=choose();}
	n4=choose();
	while(n4==n3||n4==n2||n4==n1){n4=choose();}
	cout<<n1<<","<<n2<<","<<n3<<","<<n4<<" is chosen to be awarded."<<endl;
}
