//template class and as a  functions 
#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangle{
    private:
    int a;
    int b;
    public:
    //constructor 
    Rectangle(){
        a = 0;
        b = 0;
    }
    
    //constructor overloading 
    // Rectangle(int l ,int br){
    //     a = l;
    //     b = br;

    // }
    int area(){
        return a*b;
    }
    int para(){
        return 2*(a+b);
    }
    //setter function 
    void set_l(int l){
        a=l;
    }
    void set_b(int br){
        b = br;
    }
    //getter function 
    int get_l(){
        return a;
    }
    int get_b(){
        return b;
    }    
    
};
int main(){
    Rectangle r1(10 , 5);
    r1.set_l(5);
    r1.set_b(6);
    cout<<r1.area()<<"\n"<<r1.para()<<endl;
    return 0;
}