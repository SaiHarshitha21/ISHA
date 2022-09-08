#include<iostream>
using namespace std;
int main()
{
	int i,j,r,c;
	cout<<"\n enter number of rows";
	cin>>r;
	cout<<"\n enter number of columns";
	cin>>c;
	cout<<"hollow box number pattern\n";
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || i==r || j==1 || j==c)
			{
				cout<<"1";
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
