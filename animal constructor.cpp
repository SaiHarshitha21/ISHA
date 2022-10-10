#include<iostream>
using namespace std;
class animal_height
{
	public:
		animal_height(int a){
			cout<<"height of anmimal "<<a<<endl;
		}
	};
	class cage_no{
		public:
			cage_no(int b){
				cout<<"cage no of animal "<<b<<endl;
			}
		};
		class weight{
			public:
				weight(int c){
					cout<<"weight of animal "<<c<<endl;
				}
};
	class age{
			public:
				age(float d){
					cout<<"age of animal "<<d;
				}
			};



int main()
{
	animal_height obj(2);
	cage_no obj2(4);
	weight obj3(6);
	age obj4(2.5);
	return 0;
}
