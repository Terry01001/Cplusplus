#include<iostream>
using namespace std;
int i,num;

class stack{
	public:
		void output(int count);
		int pop();
		void push(int n);
	private:
		int arr[100];
		//int data;
		int *p=arr;
		int *tos=arr;
};
//memfunct
void stack::push(int n){
	*p = n;
	p++;
}
int stack::pop(){
	if(p==tos){
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	else{
		p--;
		*p=0;
		return 0;
	}
}
void stack::output(int count){
	if(p==tos){
		cout<<"Stack is empty"<<endl;
		return;
	}
	else{
		cout<<"In stack: ";
		for(i=0;i<count;i++){
				cout<<arr[i]<<" ";
		
		}
	}
	cout<<endl;
}


int main(){
	stack my;
	int choice=0;
	int count=0;
	
	while(choice!=3){
		cout<<"1 for push in stack, 2 for pop out from stack, 3 for exit:"<<endl;
		cin>>choice;
		if(choice==1){
			count+=1;
			cout<<"Enter a number:"<<endl;
			cin>>num;
			my.push(num);
			my.output(count);
		}
		else if(choice==2){
			if(count==0){}
			else{count-=1;}
			my.pop();
			my.output(count);
		}
	
	}
}
