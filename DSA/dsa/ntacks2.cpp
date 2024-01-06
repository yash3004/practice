//creating the n stacks 
#include<bits/stdc++.h>
using namespace std;
class Nstacks{
    int *arr;
    int *top;
    int capacity;
    Nstacks(int n , int k){
        capacity = n*k;
        arr = new int(capacity);
        top = new int(n);
        //init the top
        for(int i=0;i<n;i++){
            top[i] = -1;
        }

    }
    bool is_full(int ntop){
        return top[ntop] == (ntop+1)*k - 1;
    }
    bool is_empty(int ntop){
        return top[ntop] == -1;
    }
    void push(int data , int ntop){
        if(is_full(ntop)){
            cout<<"array is full !!"
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
            top[ntop]--;
        }
    }
};