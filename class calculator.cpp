#include<iostream>
using namespace std;
class calculator{
	public:
		int a,b;
		calculator(){
			cout<<"enter two numbers"<<endl;
			cin>>a>>b;
			cout<<"addition="<<a+b<<endl;
			cout<<"subraction="<<a-b<<endl;
			cout<<"multiplication="<<a*b<<endl;
			cout<<"division="<<a/b;
		}
};
int main(){
	calculator o;
	return 0;
}
