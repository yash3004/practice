//making the dynamic stack 
//stack in c++
#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
    int top;
    int * arr;
    int capacity;
    public:
    Stack(int cap){
        top = -1;
        capacity = cap;
        arr = new int[cap];
    }
    bool is_empty(){
        return top == -1;
    }
    bool is_full(){
        return top == capacity - 1;
    }
    void isdouble(){
        int new_cap = capacity*2;
        int *newarr = new int[new_cap];
        //coping the element from arr to newarr

        for(int i=0;i<=top;++i){
            newarr[i] = arr[i];
        }
        //dealcate the old array memory 
        delete [] arr;
        arr = newarr;
        capacity = new_cap;
        
    }
    void push(int data){
        if(is_full()){
            isdouble();
            
        }
        arr[++top] = data;
        cout<<data<<"inserted to the stack"<<endl;
    }
    void pop(){
        if(is_empty()){
            cout<<"stack is empty"<<endl;
        }
        cout<<arr[top--]<<"is poped out"<<endl;
    }
    int peak(){
        if(is_empty()){
            cout<<"Stack is empty"<<endl;
        }
        return arr[top];
    }
    ~Stack(){
        delete[] arr;
    }


};
int main(){
    Stack s1(10);
    int i = 0; 
    while(i != 100){
        s1.push(i);
        i++;
    }
    
}