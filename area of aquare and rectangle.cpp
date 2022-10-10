#include<iostream>
using namespace std;
class area{
	public:
		int n;
		area(int a){
		 n=a*a;
		}
		area(int a,int b){
			n=a*b;
		}
		void areas(){
		cout<<n<<endl;
	}
	};
	int main(){
		area o(2);
		o.areas();
		area o1(2,4);
		o1.areas();
		return 0;
	}
