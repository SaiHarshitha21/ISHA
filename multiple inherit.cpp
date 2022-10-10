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
class sem
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class marks:public sem,public college
{
	public:
		void c()
		{
			cout<<"c";
		}
};

int main()
{
	marks obj;
	obj.c();
	obj.a();
	obj.c();
	obj.b();
	return 0;
}
