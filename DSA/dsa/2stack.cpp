//making the 2 stack from 1 array 
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int capacity;
    int top1 , top2;
    int  *arr;
    Stack(int cap){
        capacity = cap;
        top1 = -1;
        top2 = cap;
        arr = new int(cap);
    }
    bool isfull(){
        return top1+1 == top2;
    }
    bool isempty(int top){
        if(top == 1){
            return top1 == -1;
        }
        else{
            return top2 == capacity;
        }
    }
    void push(int data , int top){
        if(isfull()){
                cout<<"the stack is overflow !!"<<endl;
        }

        if(top == 1){
                arr[++top1] = data;
            }
        else{arr[--top2] = data;
        }

     }
    int pop(int top){
       if(isempty(top)){
        cout<<"array is empty!!"<<endl;
        return 0;
       }
       if(top == 1){
        return arr[top1--];
       }
       else{
        return arr[top2++];
       }
    }
    void print_stack(int top){
        if(top == 1){
            while(!isempty(top)){
                cout<<arr[top1--]<<" ";
            }
            cout<<endl;

        }
        else{
            while(!isempty(top)){
                cout<<arr[top2++]<<" ";
            }
            cout<<endl;
        }

    }
};
int main(){
      int capacity = 6;
    Stack s(capacity);

    s.push(1, 1);
    s.push(2, 1);
    s.push(3, 2);
    s.push(4, 2);

    s.print_stack(1); // Print stack 1
    s.print_stack(2); // Print stack 2

    return 0;

}

