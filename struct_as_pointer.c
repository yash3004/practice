//using struct in heap memory 
#include<iostream>
#include<stdlib.h>

struct rect{
    int l;
    int b;
};
rect r1;
struct rect * fun(){
    rect *p ;
    p = new rect[4];

    p[0]->l = 5;
    p[0]->b = 6;
    return p;




}
int main(){
    rect * ptr;
    ptr = fun();
    cout<<ptr[0].l<<ptr[0].b<<endl;
    return 0;

}