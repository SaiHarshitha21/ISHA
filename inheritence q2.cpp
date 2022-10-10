#include<iostream>
using namespace std;
class student
{
	public:
		void a()
		{
			cout<<"a";
		}
};
class college:public student
{
	public:
		void b()
		{
			cout<<"b";
		}
};
class home:public student
{
	public:
		void c()
		{
			cout<<"c";
		}
};
class tution:public student
{
	public:
		void d()
		{
			cout<<"d";
		}
};
class oops:public college
{
	public:
		void e()
		{
			cout<<"e";
		}
};
class work:public home
{
	public:
		void f()
		{
			cout<<"f";
		}
};
class html:public tution
{
	public:
		void g()
		{
			cout<<"g";
		}
};
class job:public oops,public work,public html, public student
{
	public:
		void h()
		{
			cout<<"h";
		}
};
int main(){
	job o1;
	//college o2;\
	o1.b();
    o1.c();
	o1.d();		
	o1.e();
	o1.f();	
	o1.g();
	o1.h();	
	o1.b();
	//o1.a();
	return 0;		
}



