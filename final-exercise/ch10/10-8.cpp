#include<iostream>
#include<string>
using namespace std;
int i,num,nummode;

class Television{
	public:
		Television();
		Television(string t,double dim,string* con);
		//mutator accesor
		void settype(string t);
		void setdim(double dim);
		void setcon(string *con);
		string gettype()const;
		double getdim()const;
		string* getcon()const;
		//mem funct
		void output()const;
		//overload assignment
		Television& operator=(const Television& rside);
		//copy constructor
		Television(const Television& TVobject);
		//destructor
		~Television();
	private:
		string displayType;
		double dimension;
		string *connectivitySupport;
};
//constructor
Television::Television(string t,double dim,string* con):displayType(t),dimension(dim){
	connectivitySupport=con;
}
Television::Television(){}
//mutator accesor
void Television::settype(string t){displayType=t;}
void Television::setdim(double dim){dimension=dim;}
void Television::setcon(string *con){connectivitySupport=con;}
string Television::gettype()const{return displayType;}
double Television::getdim()const{return dimension;}
string* Television::getcon()const{return connectivitySupport;}
//memfunct
void Television::output()const{
	cout<<"Display type : "<<displayType<<endl;
	cout<<"Dimension(inches): "<<dimension<<endl;
	cout<<"connectivity support types:"<<endl;
	for(i=0;i<nummode;i++){
		cout<<connectivitySupport[i]<<endl;
	}
}
//*******************the point
//overload assignment=//can access priv?
Television& Television::operator=(const Television& rside){
	displayType=rside.displayType;
	dimension=rside.dimension;
	for(i=0;i<nummode;i++){
		connectivitySupport[i]=rside.connectivitySupport[i];
	}
	return *this;
}
//copy constructor//can access priv mem?
Television::Television(const Television& TVobject)
			:displayType(TVobject.gettype()),dimension(TVobject.getdim())
{
	
	connectivitySupport = new string[nummode];
	for (i=0;i<nummode;i++){
		connectivitySupport[i]=TVobject.connectivitySupport[i];
	}
	
}
//deconstructor
Television::~Television(){
	delete [] connectivitySupport;
}



int main(){
	int index;
	string type;
	double dimen;
	string *connect=NULL;
	
	cout<<"Enter default TV display type :"<<endl;
	cin>>type;
	cout<<"Enter default TV Dimension :"<<endl;
	cin>>dimen;
	cout<<"Enter the number of connectivity modes"<<endl;
	cin>>nummode;
	connect = new string[nummode];
	cout<<"Enter default TV connectivity support types :"<<endl;
	for(i=0;i<nummode;i++){
		cin>>connect[i];
	}
	Television automatic(type,dimen,connect);
	
	
	cout<<"Default TV mode :"<<endl;
	automatic.output();
	
	
	cout<<"Enter TV numbers :";
	cin>>num;
	cout<<endl;
	
	Television ptrtoclass[num];
	//ptrtoclass = new Television[num];
	for (i=0;i<num;i++){
		ptrtoclass[i] = automatic;
	}
	ptrtoclass[0].output();
	return 0;
	
	for(i=0;i<num;i++){
		cout<<"Enter index of TVs required of customization(input -1 to end)"<<endl;
		cin>>index;
		if(index==-1){break;}
		cout<<"Enter TV#"<<index<<" display type :"<<endl;
		cin>>type;
		ptrtoclass[index].settype(type);
		
		cout<<"Enter TV#"<<index<<" Dimension :"<<endl;
		cin>>dimen;
		ptrtoclass[index].setdim(dimen);
		
		cout<<"Enter the number of connectivity modes"<<endl;
		cin>>nummode;
		connect = new string[nummode];
		
		for (i=0;i<nummode;i++){
			cout<<"Enter TV#"<<index<< "connecitvity support types :"<<endl;
			cin>>connect[i];
			ptrtoclass[index].setcon(connect);
		}
	}
	
	//output
	for (i=0;i<num;i++){
		cout<<"TV#"<<i<<endl;
		ptrtoclass[i].output();
	}
	
	
	
	
}

