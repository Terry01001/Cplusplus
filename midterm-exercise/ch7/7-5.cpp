#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
	int i=0,num,count=1;
	int indexnum,newindex;
	vector<int> v;
	
	cout<<"Enter the nunmber of suitors"<<endl;
	cin>>num;
	cout<<"To win the princess,you should stand in position ";
	
	for(i=0;i<num;i++){
		v.push_back(count);
		count++;
	}
	//print vector
	/*for(i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}*/
	v.erase(v.begin()+2);
	indexnum=2;
	
	while(v.size()!=1){
		newindex=(indexnum+2)%v.size();
		v.erase(v.begin()+newindex);
		indexnum=newindex;
	}
	cout<<v[0]<<endl;
}
