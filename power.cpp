#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int power,base,b=1;
	cout<<"enter the base and power";
	cin>>base>>power;
	while(power!=0){
		b*=base;
		power--;
	}
	cout<<b;
}

