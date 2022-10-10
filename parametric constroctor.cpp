#include<iostream>
using namespace std;
class cn
{
	public:
		cn( int a){
			cout<<a*a;
		}
};

int main()
{
	cn obj(2);
	return 0;
}
