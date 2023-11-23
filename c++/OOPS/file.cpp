//c++ files manipulation 
#include<iostream>
#include<fstream>
//writitng in a file 
using namespace std;
int main()
{
	//creating a file
	ofstream newfile("/Users/yashsehgal/Documents/OOPs/newfile.cpp");
	//writing in a file
	newfile<<"#include<iostream>\n
	using namespace std;\n
	int main(){
		cout<<"hello my name is yash";
	}";
	//closing the file
	newfile.close();
}