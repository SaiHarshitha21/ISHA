#include<iostream>
using namespace std;
class college
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class sem:public college
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class marks:public sem
{
	public:
		void c()
		{
			cout<<"c";
		}
};

int main()
{
	sem obj1;
	marks obj2;
	obj1.b();
	obj1.a();
	obj2.c();
	obj2.b();
	obj2.a();
	return 0;
}
