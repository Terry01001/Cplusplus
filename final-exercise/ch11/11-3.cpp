#include<iostream>
using namespace std;


char cn[7]={'R','O','Y','G','B','I','P'};
int col[7]={1,2,3,4,5,6,7};
int i,j;


namespace Rainbow{
	class rainbowcolor{
	public:
		rainbowcolor nextcolor(char n);
		rainbowcolor(char n);
		rainbowcolor(int col);
		rainbowcolor();
		int input(char n);//read the color as an integer
		char getcolorbyname();
		void outputcolor(char n);
		//test return a class type function
		//rainbowcolor nextcolor(void);
	private:
		int color;
		char name;
	};
	//constructor
	rainbowcolor::rainbowcolor(char n):name(n){}
	rainbowcolor::rainbowcolor(int col):color(col){}
	rainbowcolor::rainbowcolor():color(1),name('R'){}
	//
	char rainbowcolor::getcolorbyname(){
	char n;
	cin>>n;
	return n;
	}
	int rainbowcolor::input(char n){//fail to find return -1
		int index=-1;
		for(i=0;i<7;i++){
			if(n==cn[i]){
				index=i+1;
				//cout<<index;
				return index;
			}
		}
		return index;
	}
	void rainbowcolor::outputcolor(char n){cout<<" "<<n<<endl;}

	rainbowcolor rainbowcolor::nextcolor(char n){
	
		rainbowcolor next;
		while(input(n)>0){
			cout<<"current rainbowcolor "<<input(n)<<" "<<n<<endl;
			if(input(n)==7){cout<<"next rainbowcolor "<<"1 R"<<endl;}
			else{
				cout<<"next rainbowcolor "<<input(n)+1<<" "<<cn[input(n)]<<endl;
			}
			n=getcolorbyname();
		}
		cout<<n<<" is not a rainbowcolor. Exiting"<<endl;
		return next;
	}
}

//using Rainbow::rainbowcolor;//key point
using namespace Rainbow;


int main(){
	char name;
	int color,count=0;
	rainbowcolor test;
	cout<<"Testing constructor Rainbowcolor(char)"<<endl;
	for(i=0;i<7;i++){
		cout<<i+1<<" "<<cn[i]<<endl;
	}
	cout<<"Testing Rainbowcolor(int) constructor "<<endl;
	for(i=0;i<7;i++){
		cout<<i+1<<" "<<cn[i]<<endl;
	}
	cout<<endl;
	
	while(1){
		cout<<"Testing the getrainbowcolorbyname and outputrainbowcolor"<<endl;
		name=test.getcolorbyname();
		count=test.input(name);
		//cout<<count;
		if(count>0){cout<<count;test.outputcolor(name);}
		
		if(count<=0){
			cout<<name<<" is not a rainbowcolor. Exiting."<<endl;
			break;
		}
		
	}
	cout<<"end of loops."<<endl<<endl;
/////////////////////////////////////////////////////////////////////////////next section

	cout<<"Testing nextrainbowcolor member"<<endl;
	name=test.getcolorbyname();
	test.nextcolor(name);
	
	return 0;
	
}
