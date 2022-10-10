#include<iostream>
using namespace std;
class student
{
	public:
		int student()
		{           
			cout<<"student";
		}
};
class college:public student
{
	public:
		int college()
		{
			cout<<"college";
		}
};
class home:public student
{
	public:
		int home()
		{
			cout<<"home";
		}
};
class tution:public student
{
	public:
		int tution()
		{
			cout<<"tution";
		}
};
class oops:public college
{
	public:
		int oops()
		{
			cout<<"oops";
		}
};
class work:public home
{
	public:
		int work()
		{
			cout<<"work";
		}
};
class html:public tution
{
	public:
		int html()
		{
			cout<<"html";
		}
};
class job:public oops,public work,public html, public student
{
	public:
		int job()
		{
			cout<<"job";
		}
};
int main(){
	job o1;
	o1.college();
    o1.home();
	o1.tution();		
	o1.oops();
	o1.work();	
	o1.ht5ml();
	o1.job();	
	o1.student();
	return 0;		
}



