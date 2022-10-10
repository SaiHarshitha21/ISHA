#include<iostream>
using namespace std;
class animal{
	int cage_no,height,weight;
	float speed;
	public:
		animal(){
			cout<<"enter the cage no";
			cin>>cage_no;
			cout<<"enter the height";
			cin>>height;
			cout<<"enter the weight";
			cin>>weight;
			cout<<"enter the speed";
			cin>>speed;
			cout<<cage_no<<"\t"<<height<<"\t"<<weight<<"\t"<<speed;
		}
};

int main()
{
	animal obj;
	return 0;
}
