#include<iostream>
#include<cstdlib>
using namespace std;

int bagel,cake,cro,toast;
int value(int& itemcode,int& vouchervalue){
	switch(itemcode){
		case 1:
			if(vouchervalue>=bagel){
				vouchervalue-=bagel;
				cout<<"The price of item which you buy:"<<bagel<<endl;
				cout<<"You still have value of voucher:"<<vouchervalue<<endl;
				break;
			}
			else{return -1;}
		case 2:
			if(vouchervalue>=cake){
				vouchervalue-=cake;
				cout<<"The price of item which you buy:"<<cake<<endl;
				cout<<"You still have value of voucher:"<<vouchervalue<<endl;
				break;
			}
			else{return -1;}
		case 3:
			if(vouchervalue>=cro){
				vouchervalue-=cro;
				cout<<"The price of item which you buy:"<<cro<<endl;
				cout<<"You still have value of voucher:"<<vouchervalue<<endl;
				break;
			}
			else{return -1;}
		case 4:
			if(vouchervalue>=toast){
				vouchervalue-=toast;
				cout<<"The price of item which you buy:"<<toast<<endl;
				cout<<"You still have value of voucher:"<<vouchervalue<<endl;
				break;
			}
			else{return -1;}
	}
	return 0;
}

int main(){
	int voucher,choice,test;
	cout<<"1.Bagel: ";
	cin>>bagel;
	cout<<"2.Cake: ";
	cin>>cake;
	cout<<"3.Croissant: ";
	cin>>cro;
	cout<<"4.Toast: ";
	cin>>toast;
	cout<<"Input your value of voucher : "<<endl;
	cin>>voucher;
	
	while(1){
		cout<<"Which item you want?";
		cin>>choice;
		cout<<endl;
		test=value(choice,voucher);
		cout<<endl;
		if(test==-1||voucher==0){
			cout<<"You don't have enough value of voucher to buy anything."<<endl;
			return 0;
		}
	}
	
	/*
	for(i=0;i<4;i++){cin>>b[i];}
	for(i=0;i<4;i++){
		cout<<"bread"<<i+1<<" = "<<b[i]<<endl;
	}
	cout<<"your voucher value : "<<endl;
	cin>>vouchervalue;
	total = vouchervalue;
	sort(b,sizeof(b)/sizeof(b[0]));
	for(i=0;i<4;i++){
		if(vouchervalue<b[i]){break;}
		else{
			value(b[i],vouchervalue);
		}
	}
	cout<<"The sum of the items we selected : "<<total-vouchervalue<<endl;
	cout<<"The unutilized balabce on the voucher : "<<vouchervalue<<endl;
*/
}
