//code for fibocci series 
#include<iostream>
using namespace std;
int fib(int n){
    if(n==1 or n==2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int n = fib(10);
    cout<<n;
}