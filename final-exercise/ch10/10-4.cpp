#include<iostream>
#include<string>
using namespace std;
int i;

class Subscriber{
	public:
		Subscriber();
		
		string getname()const;
		void input();
		int output() const;
		void reset();
		//overload assignment
		Subscriber& operator=(const Subscriber& rside);
		//copy constructor
		Subscriber(const Subscriber& subobject);
		//destructor
		~Subscriber();
	private:
		string name;
		int numChannels;
		string *channelList;
};
Subscriber::Subscriber():name("None"),numChannels(0){
	channelList=NULL;
}
//mutator accesor
string Subscriber::getname()const{return name;}
//memfunct
void Subscriber::input(){
	cout<<"Enter person name."<<endl;
	cin>>name;
	cout<<"Enter number of channels."<<endl;
	cin>>numChannels;
	channelList = new string[numChannels];
	for(i=0;i<numChannels;i++){
		cout<<"Enter name of channel "<<i+1<<endl;
		//cin.ignore(3,'\n');
		cin>>channelList[i];//'\n'
		cin.ignore(3,'\n');
	}
}
int Subscriber::output()const{
	cout<<"Name :"<<name<<endl;
	cout<<"Number of channels:"<<numChannels<<endl;
	if(numChannels==0){cout<<endl;return 0;}
	for(i=0;i<numChannels;i++){
		cout<<"\t"<<"Channel "<<i+1<<":"<<channelList[i]<<endl;
	}
	cout<<endl;
	return 1;
}
void Subscriber::reset(){
	numChannels=0;
	delete [] channelList;
	channelList=NULL;
}
//overload assignmnet
Subscriber& Subscriber::operator=(const Subscriber& rside){
	if(numChannels != rside.numChannels && name!= rside.name){
		delete [] channelList;
		channelList = new string[rside.numChannels];
	}
	name=rside.name;
	numChannels=rside.numChannels;
	for(i=0;i<numChannels;i++){
		channelList[i]=rside.channelList[i];
	}
	return *this;
}
//copy constructor
Subscriber::Subscriber(const Subscriber& subobject)
	:name(subobject.name),numChannels(subobject.numChannels)
{
	channelList=new string[numChannels];
	for(i=0;i<numChannels;i++){
		channelList[i]=subobject.channelList[i];
	}
}
//destructor
Subscriber::~Subscriber(){
	delete [] channelList;
}

int main(){
	Subscriber p1;
	p1.input();
	cout<<endl<<"Person 1's data:"<<endl;
	p1.output();
	
	cout<<"Person 2's data after assignment from student 1:"<<endl;
	Subscriber p2(p1);
	//p2=p1;
	p2.output();
	
	cout<<"Person 1's data after reset:"<<endl;
	p1.reset();
	p1.output();
	
	cout<<"Person 2's data,should still have original classes:"<<endl;
	p2.output();
	
}

