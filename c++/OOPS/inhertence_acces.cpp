 //inheritence via acess specifiers
 #include<iostream>
 using namespace std;
 class Base
 {
 	protected : 
 		int num1;
 		int num2;
 };
 //derived class
 class Derived : public Base
 {
 	public : 
 		int num3;
 		void set_val(int n1 , int n2)
 		{
 			num1 = n1;
 			num2 = n2;
 		}
 		int get_val()
 		{
 			return num1 + num2;
 		}
 };
 int main()
 {
 	Derived obj;
 	obj.set_val(1,2);
 	cout<<"the sum is :"<<obj.get_val();
 	return 0;
 }