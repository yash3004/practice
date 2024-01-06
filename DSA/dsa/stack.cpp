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
    void push(int data){
        if(is_full()){
            cout<<"stack is overflowed cant insert the data !!"<<endl;
            return;
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
    while(i != 10){
        s1.push(i);
        i++;
    }
    
}