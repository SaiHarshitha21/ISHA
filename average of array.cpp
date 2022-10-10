#include<iostream>
using namespace std;
int main(){
int i,a[100],avg,sum=0;
cout<<"enter the 5 elements in the array";
for(i=1;i<=5;i++){
cin>>a[i];
sum=sum+a[i];
}
avg=sum/5;
cout<<"the average of the array is"<<avg;
}
