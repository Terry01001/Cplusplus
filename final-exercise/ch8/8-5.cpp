#include<iostream>
using namespace std;

class Vector2D{
	public:
		Vector2D();
		Vector2D(int a,int b);
		int getx() const;
		int gety() const;
		void setx(int a);
		void sety(int b);
		//overload operator
		int operator*(const Vector2D& point2) const;
		friend ostream& operator<<(ostream& outputstream,const Vector2D& point);
		friend istream& operator>>(istream& inputstream,Vector2D& point);
	private:
		int x;
		int y;
};
//constructor
Vector2D::Vector2D():x(0),y(0){}
Vector2D::Vector2D(int a,int b):x(a),y(b){}
//memfunct
int Vector2D::getx() const{return x;}
int Vector2D::gety() const{return y;}
void Vector2D::setx(int a){x=a;}
void Vector2D::sety(int b){y=b;}
//operator overloading
int Vector2D::operator*(const Vector2D& point2) const{
	return x*point2.getx()+y*point2.gety();
}
ostream& operator<<(ostream& outputstream,const Vector2D& point){
	outputstream<<"("<<point.x<<","<<point.y<<")";
	return outputstream;
}
istream& operator>>(istream& inputstream,Vector2D& point){
	int c,k;
	inputstream>>c>>k;
	point.x=c;
	point.y=k;
	return inputstream;
}
//
int main(){
	Vector2D A1(9,10),B1(17,0);
	Vector2D A2(10,12),B2(0,8);
	Vector2D A3(19,13),B3(7,20);
	cout<<A1<<" * "<<B1<<" = "<<A1*B1<<endl;
	cout<<A2<<" * "<<B2<<" = "<<A2*B2<<endl;
	cout<<A3<<" * "<<B3<<" = "<<A3*B3<<endl;
	
}
