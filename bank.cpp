#include<iostream>
#include<string.h>
using namespace std;
class bank{
	int acc_no,acc_type,balance;
	char name[10];
	public:
		bank(){
			cout<<"enter the name";
			cin>>name;
			cout<<"enter the account number";
			cin>>acc_no;
			cout<<"enter the account type";
			cin>>acc_type;
			cout<<"enter the balance";
			cin>>balance;
			cout<<name<<"\t"<<acc_no<<"\t"<<acc_type<<"\t"<<balance;
		}
};

int main()
{
	bank obj;
	return 0;
}
