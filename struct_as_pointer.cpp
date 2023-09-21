//using struct in heap memory 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


struct rect{
    int l;
    int b;
};

struct rect * fun(){
    struct rect *p ;
    p = new rect[4];

    p[0].l = 5;
    p[0].b = 6;
    return p;




}
int main(){
    clock_t start,end;
    start = clock();
    rect * ptr;
    ptr = fun();
    cout<<ptr[0].l<<ptr[0].b<<endl;
    double ext_time = ((double)end - start)/CLOCKS_PER_SEC;

    cout<<ext_time<<" "<<endl;
    end = clock();

    return 0;

}