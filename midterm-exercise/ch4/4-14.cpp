#include<iostream>
using namespace std;

int difference(int& start,int &end){
	int min=0;
	if(end>=start){
		if((end%100)>=(start%100)){//xian jian fenzhong
			min+= ((end%100)-(start%100));
			min+= ((end/100-start/100)*60);
			return min;
		}
		else{//fenzhong bu gou jian
			min+= (end+60-start);
			min+= (((end/100-1)-start/100)*60);
			return min;
		}
	}
	else{//ge yi tian
		min+= (60-(start%100));
		min+= ((23-start/100)*60);
		min+= (end/100*60);
		min+= (end%100);
		return min;
	}
}



int main(){
	int start,end,ans;
	cout<<"Please enter the start time and end time : "<<endl;
	cin>>start>>end;
	ans=difference(start,end);
	cout<<"The difference of the time : "<<ans <<" mins."<<endl;
}
