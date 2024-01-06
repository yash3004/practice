//creating the n stacks 
#include<bits/stdc++.h>
using namespace std;
class Nstacks{
    public:
    int *arr;
    int *top;
    int capacity;
    int n;
    int k;
    Nstacks(int n , int k){
        this->n = n;
        this->k = k;
        capacity = n*k;
        arr = new int[capacity];
        top = new int[n];

        //init the top
        for(int i=0;i<n;i++){
            top[i] = -1;
        }

    }
    bool is_full(int ntop){
        return top[ntop] == k;
    }
    bool is_empty(int ntop){
        return top[ntop] == -1;
    }
    void push(int ntop , int data){
        if(is_full(ntop)){
            cout<<"stack is full !!";
            return;
        }
        int idx = ntop * k + top[ntop] + 1;
        arr[idx] = data;
        top[ntop]++;
    }
    int pop(int ntop){
        if(is_empty(ntop))
        {
            cout<<"array is empty";
            return 0;
        }
        int idx = ntop * k + top[ntop];
        top[ntop]--;
        return arr[idx];
    }
    void print_stack(int ntop){
        while(!is_empty(ntop)){
            int idx = ntop*k + top[ntop];
            cout<<arr[idx]<<" ";
            top[ntop]--;
        }
        cout<<endl;
    }
};
int main(){
    Nstacks n(4 , 3);
    n.push(1 , 1);
    n.push(1 , 2);
    n.push(1,3);
    n.push(1,4);
    
    n.push(2,4);
    n.push(2,4);
    n.push(2,4);
    n.push(3,4);
    n.push(3,4);
    n.push(3,4);
    n.push(3,4);
    n.push(4,1);
    n.push(5,1);
    n.print_stack(1);
    n.print_stack(2);
    n.print_stack(3);
    n.print_stack(4);
    n.print_stack(5);
}