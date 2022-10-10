#include<iostream>
#include<string.h>
using namespace std;
class student{
	char name[10];
	public:
		student(){
		cout<<"name of student";
		cin>>name;
	}
};
		
int main()
{
	student obj;
	return 0;
}
