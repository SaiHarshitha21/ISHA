#include<iostream>
using namespace std;
	void area(int a)
	{
		cout<<"area of square="<<(a*a)<<endl;
	}
	void area(int a,int b)
	{
		cout<<"area of rectangle="<<(a*a)<<endl;
	}
	void area(double a,double b)
	{
		cout<<"area of triangle="<<((0.5)*a*b)<<endl;
	}
	void area(double r)
	{
		cout<<"area of circle="<<(3.14*r*r)<<endl;
	}
	int main(){
	area(4);
	area(2,4);
	area(4.22,4.22);
	area(2.22);
	return 0;
}

