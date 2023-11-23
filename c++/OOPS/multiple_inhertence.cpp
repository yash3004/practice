//programm for multiple inhertence 
#include <iostream>
#include<string.h>
using namespace std;
// base class 1
class Base1
{
	private : 
		int num1;
	public : 
		
		void get_val(int n1)
		{
			num1 = n1;
			cout<<"enter the num1";
			cin>>n1;
		}

};
//base class 2
class Base2
{
	private : 
		int num2;
	public : 
		
		void get_val(int n2)
		{
			num2 = n2;
			cout<<"enter the num2 ";
			cin>>n2;

		}
};
//derived class from base1 and base 2
class Derived : public Base1 , public Base2
{
	public : 
		
		void sum()
		{
			Base1::get_val();
			Base2::get_val();
			cout<<"the sum is : " <<n1+n2;
			
		}
};
int main()
{
	Derived obj;
	obj.sum();
	return 0;
}
