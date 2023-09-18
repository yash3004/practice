#include<iostream>
using namespace std;
class Circle
{
    private:
    int radius;
    public:
    Circle(int r){
        radius=r;
        }
        //setter functoin 
    void set_r(int radius){
        this->radius = radius;
        }
        //getter function 
    int get_r(){
        return radius;
        }
};
class Utility{
    public:
    double circle_area(Circle c){
        int r = c.get_r();
        return 3.14*r*r;
    }
};
int main(){
    int rad;
    cout<<"enter the radius"<<endl;
    cin>>rad;
    Circle obj(rad);
    Utility c1;
    cout<<"the area of the circle is : "<<c1.circle_area(obj)<<endl;
    return 0; 
}