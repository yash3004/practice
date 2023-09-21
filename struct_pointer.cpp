//using pointers in struct 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    struct rect{
        int l;
        int b;
    };

    rect *p;
    p = (rect*)malloc(4*sizeof(rect));
    for(int i = 0; i<=4;i++){
        cout << "enter length:" << endl;
        cin>>(p+i)->l;
        cout<<"enter breadth"<<endl;
        cin>>(p+i)->b;
    }
    for(int j=0;j<=4;j++){
        cout<<"length"<<(p+j)->l<<endl;
        cout<<"breadth:"<<(p+j)->b<<endl;
    }
    return 0;
    
}