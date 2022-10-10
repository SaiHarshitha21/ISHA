#include<iostream>
using namespace std;
int main(){
	int n,i,j,a[10],c=1,m=0,b[10];
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++)
				if(a[i]==a[j])
			c++;
			b[i]=a[i];
		}
		cout<<"most occured number="<<b[i];
return 0;
}

