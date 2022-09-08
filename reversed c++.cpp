#include<iostream>
int main()
{
int n,rev=0,rem;
cout <<"enter the numbers";
cin>>n;
while(n!=0)
{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
cout<<rev;
return 0;
}
