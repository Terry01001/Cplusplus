#include<iostream>
#include<vector>
#include<string>
using namespace std;
int i;
class Viewer{
	public:
		Viewer();
		Viewer(vector<string> c);
		void display();
		void menus();
		vector<string> getmessage();
	protected:
		vector<string> message;
};
class Owner:public Viewer
{
	public:
		Owner();
		void post();
		void del();
		void menus();
};
//construcctor
Viewer::Viewer(){}
Viewer::Viewer(vector<string> c):message(c){}
void Viewer::display(){
	cout<<"Message Posted :"<<endl;
	//if(message.size()==0){cout<<"no message in the blog.";return;}
	for(i=0;i<message.size();i++){
		cout<<i+1<<". "<<message[i]<<endl;
	}
}
void Viewer::menus(){
	cout<<"Menu options:"<<endl;
	cout<<"0> Exit"<<endl;
	cout<<"1> Display all messages"<<endl;
}
vector<string> Viewer::getmessage(){return message;}
//subclass
Owner::Owner(){}
void Owner::post(){
	string str;
	cout<<"Enter new message"<<endl;
	cin>>str;
	message.push_back(str);
	cout<<"Message Posted."<<endl;
}
void Owner::del(){
	int index;
	cout<<"Which message do you want to delete?"<<endl;
	cin>>index;
	message.erase(message.begin()+index-1);
	cout<<"Deleted."<<endl;
}
void Owner::menus(){
	cout<<"Menu options:"<<endl;
	cout<<"0> Exit"<<endl;
	cout<<"1> Display all messages"<<endl;
	cout<<"2> Post new message"<<endl;
	cout<<"3> Delete message"<<endl;
	cout<<"Enter command."<<endl;
}

int main(){
	int choice;
	Owner my;
	cout<<"First, enter data as the owner"<<endl;
	
	while(1){
		my.menus();
		cin>>choice;
		if(choice==0){break;}
		else if(choice ==1){
			my.display();
		}
		else if(choice ==2){
			my.post();
		}
		else if(choice ==3){
			my.del();
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Access data as viewer"<<endl;
	cout<<endl;
	
	Viewer view(my.getmessage());
	while(1){
		view.menus();
		cin>>choice;
		if(choice==0){break;}
		else if(choice==1){
			view.display();
		}
		cout<<endl;
	}

}

