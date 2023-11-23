#include<iostream>
#include<string.h>
using namespace std;
class Base
{
	public : 
		string name;
		void get_val()
		{
			cout<<"enter the name : ";
			cin>>name;
		}

};
class Derived1 : public Base
{
	public : 
		
		string brand ;
		void get_val()
		{
			Base::get_val();
			cout<<"enter the value of brand";
			cin>>brand;
		}
};
class Derived2 : public Derived1
{
	public : 
	
	string model;
	void get_val()
	{
		Derived1::get_val();
		cout<<"enter the model";
		cin>>model;
	}
};
int main()
{
	Derived2 obj;
	obj.get_val();
	cout<<obj.brand<<obj.name<<obj.model;
	return 0;
}