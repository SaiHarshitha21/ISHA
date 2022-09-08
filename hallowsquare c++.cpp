#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"emter no.of rows";
	cin>>r;
	cout<<"enter no.of columns";
	cin>>c;
	for(i=1;i<=r;i++)
	{
	for(j=1;j<=c;j++)
	{
		if(i==1 || i==r || j==1 || j==c)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
	}
	cout<<"\n";
}
return 0;
}
