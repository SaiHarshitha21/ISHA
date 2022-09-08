#include<iostream>
using namespace std;
class degree
{
	public:
		degree()
		{
			cout<<"i got a degree";
		}
};
class undergraduate:public degree
{
	public:
		undergraduate()
		{
			cout<<"i am an undergradute\n";
		}
};
class postgraduate:public degree
{
	public:
		postgraduate()
		{
			cout<<"i am an postgraduate\n";
		}
};
int main()
{
	undergraduate u;
	postgraduate p;
};

