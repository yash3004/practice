//parameter passing call by refrence 

#include<iostream>
#include<stdlib.h>
using namespace std;
class Function_param{

public:
int swap(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    return 0;
}
int * array1(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));
    cout<<"enter the elements:"<<endl;
    for(int i =0 ;i<n;i++){
        cin>>*(p+i);
    }
    return p;
}
void print_arr(int arr[] , int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

};
int main(){
    int a = 45;
    int b = 55;
    Function_param f1;

    int c = f1.swap(a , b);
    cout << a << b << endl;

    int *v;
    v = f1.array1(5);
   
    f1.print_arr(v , 5);
}