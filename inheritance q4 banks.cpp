#include<iostream>
using namespace std;
class bank
{
	public:
		void get_rate_of_interest1()
		{
			cout<<"1.5"<<endl;
		}
};
class sbi:public bank
{
	public:
		void get_rate_of_interest2()
		{
			cout<<"2.5"<<endl;
		}
};
class icici:public bank
{
	public:
		void get_rate_of_interest3()
		{
			cout<<"3.5"<<endl;
		}
};
class axis:public bank
{
	public:
		void get_rate_of_interest4()
		{
			cout<<"4.5";
		}
};
int main(){
	sbi o1;
	icici o2;
	axis o3;
	o1.get_rate_of_interest1();
    o1.get_rate_of_interest2();
  	o2.get_rate_of_interest1();
  	o2.get_rate_of_interest3();
  	o3.get_rate_of_interest1();
  	o3.get_rate_of_interest4();	  	  	    
}
