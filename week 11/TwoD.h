#ifndef TWOD_H
#define TWOD_H
#include<iostream>
using namespace std;

typedef int* Darrayptr;

namespace TD{
	class TwoD{
		public:
			TwoD();
			TwoD(int Row,int Col);
			void set(int r,int c,int val);
			int get(int r,int c) const;
			int getrow() const;
			int getcol()const;
			//operator overload
			const TwoD operator+(const TwoD& matrix2);
			//overload assignment
			TwoD& operator=(const TwoD& rside);
			//copy constructor
			TwoD(const TwoD& TDobject);
			//destructor
			~TwoD();
		
		private:
			Darrayptr *arr;
			int MaxRows;
			int MaxCols;
		};
}




#endif
