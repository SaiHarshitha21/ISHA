#include<iostream>
#include<string.h>
using namespace std;
int main(){
	 char name[10][10],tmp[10];
	 int i,j,n;
	 cout<<"enter the no of words";
	 cin>>n;
	 cout<<"enter the words one by one";
	 for(i=0;i<n;i++){
	 	cin>>name[i];
	 }
	 for(i=1;i<n;i++){
	 	for(j=1;j<n;j++){
	 		if(strcmp(name[j-1],name[j])>0){
	 			strcpy(tmp,name[j-1]);
	 			strcpy(name[j-1],name[j]);
	 			strcpy(name[j],tmp);
			 }
		 }
	}
	for(i=0;i<n;i++)
		 cout<<name[i]<<endl;
}
