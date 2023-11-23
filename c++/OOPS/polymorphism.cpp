//polymorphism
#include<iostream>
using namespace std;
class Base
{
	public : 
		int num1 , num2;
		void  get_val()
		{
			cout<<"enter the value pf num1";
			cin>>num1;
			cout<<"enter the value of num2";
			cin>>num2;
		}
};
//derived class 1 from base
class Derived1 : public Base 
{
	public : 
		void sum()
		{
			Base::get_val();
			cout<<"the sum is :"<<num1+num2;
		}
};
class Derived2 : public Base
{
	public : 
		void multi()
		{
			Base::get_val();
			cout<<"the multiply is :" <<num1*num2;
		}
};
int main()
{
	Derived1 obj;
	Derived2 obj2;
	obj.sum();
	obj2.multi();
	return 0;
}
