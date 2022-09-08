#include<iostream>
using namespace std;
class area
{
	public:
		void output(int l,int b)
		{
			cout<<"area of rectangle ="<<l*b;
		}
		void output(int a)
		{
			cout<<"\narea of square="<<a*a;
		}
};
int main()
{
	area obj;
	obj.output(5,6);
	obj.output(5);
}
