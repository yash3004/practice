//code to reverse a stack recursively
#include<bits/stdc++.h>
using namespace std;
void insert_bottom(stack<int> &mystack , int n){
    if(mystack.empty()){
        mystack.push(n);
        return;
    }
    int temp = mystack.top();
    mystack.pop();
    insert_bottom(mystack ,n);
    mystack.push(temp);
}
void rev_stack(stack<int> &mystack){
    if(mystack.empty()){
        return;
    }
    int n = mystack.top();
    mystack.pop();
    rev_stack(mystack);
    insert_bottom(mystack,n);
}
void print_stack(stack<int> mystack){
    while(!mystack.empty()){
        cout<<mystack.top()<<" ";
        mystack.pop();
        
    }
    cout<<endl;
}
int main()
{
    stack<int> mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    mystack.push(6);
    mystack.push(7);
    print_stack(mystack);
    rev_stack(mystack );
    print_stack(mystack);

    
}