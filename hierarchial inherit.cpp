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
class marks:public college
{
	public:
		void c()
		{
			cout<<"c";
		}
};
class extra:public college
{
	public:
		void d()
		{
			cout<<"d";
		}
};

int main()
{
	sem obj1;
	marks obj2;
	extra obj3;
	obj1.b();
	obj1.a();
	obj2.c();
	obj2.a();
	obj3.d();
	obj3.a();
	return 0;
}
