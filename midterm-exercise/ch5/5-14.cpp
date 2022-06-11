#include<iostream>
using namespace std;

int i,j;

int main(){
	int rating[4][6]={{3,1,5,2,1,5},{4,2,1,4,2,4},{3,1,2,4,4,1},{5,1,4,2,4,2}};
	int user[2][3];
	int cart[4]={0};
	int a,min=0,index1,index2,index3;
	/*for(i=0;i<4;i++){
		for(j=0;j<6;j++){
			cout<<rating[i][j]<<"|";
		}
		cout<<endl;
	}*/
	cout<<"input the movie code for three times :"<<endl;
	for(j=0;j<3;j++){
		cin>>user[0][j];
	}
	cout<<"input your rating correspoing to the momvies : "<<endl;
	for(j=0;j<3;j++){cin>>user[1][j];}
	
	for(j=0;j<3;j++){//calculate cartesian
		a=user[0][j]-100;
		for(i=0;i<4;i++){
			cart[i]+=((rating[i][a]-user[1][j])*(rating[i][a]-user[1][j]));
		}
	}
	for(i=0;i<4;i++){
		if(cart[i]<cart[min]){min=i;}//ji lu zuixiao zhi
	}
	cout<<"The reviewer numbered "<<min<<" rating most closely to you."<<endl;
	cout<<"The rating by the closely reviewers you may be interested : "<<endl;
	index1=user[0][0];index2=user[0][1];index3=user[0][2];
	for(j=0;j<6;j++){
		if(((j+100)!=index1) && ((j+100)!=index2) && ((j+100)!=index3)){cout<<rating[min][j]<<" for movie "<<j+100<<endl;}
	}	
}
