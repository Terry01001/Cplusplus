#include<iostream>
#include<string>
using namespace std;

string buyer[5]={"","","","",""};
int cart[5]={0};

int save(string a,int x){
	int i=0;
	for(i=0;i<5;i++){
		if(buyer[i] == ""){break;}
		if(a==buyer[i]){//yi jing you le
			cart[i]+=x;
			return 0;
		}
	}
	buyer[i]=a;
	cart[i]=x;
	return 0;
}
void output(string str[],int c[]){
	int i;
	cout<<"In your cart : "<<endl;
	for(i=0;i<5;i++){
		if(cart[i]==0){break;}
		cout<<str[i]<<":"<<c[i]<<endl;
	}
	cout<<endl;
}


int main(){
	int i;
	string pur,choice="";
	int buy;
	int quan[5]={20,15,15,20,20};
	string flavor[5]={"Chocolate","Vanilla","Strawberry","Raspberry","Butterscotch"};
	cout<<"Code\tFlavor"<<endl;
	for(i=0;i<5;i++){
		cout<<i+1<<"   \t"<<flavor[i];
		cout<<endl;
	}
	cout<<"----------------"<<endl;
	for(i=0;i<5;i++){
		cout<<i+1<<"   \t"<<quan[i];
		cout<<endl;
	}
	cout<<"----------------"<<endl;
	while(choice!="exit"){
		cout<<"input the flavor you want and the amount you want to buy it : "<<endl;
		cin>>pur>>buy;
		
		for(i=0;i<5;i++){//cal the stock
			if(pur == flavor[i]){
				if(buy>quan[i]){//chao guo shuliang
					cout<<"lack of stock!"<<endl;
					output(buyer,cart);
					return 0;
				}
				else{save(pur,buy);quan[i]-=buy;}
			}
		}
		cout<<"remaining : "<<endl;
		for(i=0;i<5;i++){//display the stock
			cout<<i+1<<"   \t"<<quan[i];
			cout<<endl;
		}
		cout<<"Is anything else you want to buy? : (if no,enter exit to quit)"<<endl;
		cin>>choice;
	}
	output(buyer,cart);
	return 0;
}
