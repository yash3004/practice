//converting the class_deep.cpp via a template class function 
#include<iostream>
#include<stdlib.h>
using namespace std;
template <class T>
class Rectangle{
    private:
    T a;
    T b;
    public:
    Rectangle(T a , T b);
    T area();
    T para();
    T volume(T h){
        return a*b*h;
    }

};
//accessing the initialized function 
template <class T>
Rectangle <T> :: Rectangle(T a , T b){
    this->a = a;
    this->b = b;
}
template <class T>
T Rectangle <T> :: area(){
    return a*b;
}
template <class T>
T Rectangle <T> :: para(){
    return 2*(a+b);
}
int main(){
    Rectangle<float>r1(12.2 , 12.4);
    cout<<r1.area()<<"\n"<<r1.para()<<"\n"<<r1.volume(12.3)<<endl;
    return 0;
    
}