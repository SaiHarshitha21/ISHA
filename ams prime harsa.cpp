#include<iostream>
using namespace std;
int main(){
	int n,a=0,b,r=0,c=0,i;
	cout<<"enter the number";
	cin>>n;
	b=n;{
	while(n>0){
		r=n%10;
		a+=r*r*r;
		n=n/10;
	}
	n=b;
	if(n==a){
		cout<<"it is a amstrong number"<<endl;}
		else{
			cout<<"not a amstrong number";
			cout<<endl;
		}
	}

for(i=1;i<=n;i++){
	if(n%i==0){
		c++;}
	}
	if(c==2)
		cout<<"it is prime number"<<endl;
	else
		cout<<"not a prime number"<<endl;
		
		b=n;
		while(n>0){
			r=n%10;
			a+=r;
			n=n/10;
		}
		n=b;
		if(n%a==0)
			cout<<"harshadh number";
		else
		cout<<"not a harshadhn number";
		

}
