#include<iostream>
using namespace std;
int fab(int n)
{
	if(n<=1)
	{
		return n ;
	}
	else
	{
		return(fab(n-1)+fab(n-2));
	}
}
int main()
{
	int n;
	cout<<"enter n value";
	cin>>n;
	cout<<"nth term="<<fab(n-1);
	return 0;
}
