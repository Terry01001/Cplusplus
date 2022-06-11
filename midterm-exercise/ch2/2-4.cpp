#include<iostream>
using namespace std;

int main(){
	int i,j,count;
	cout<<"the prime number between 3-100 : "<<endl;
	for(i=3;i<=100;i++){
		count =0;
		for(j=2;j<=i-1;j++){
			
			if(i%j == 0){
				count++;
			}
		
		}
		if(count == 0){
			cout<<i<<"  ";
		}
	
	}
	cout<<endl;

}
