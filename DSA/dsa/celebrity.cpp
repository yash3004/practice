//celebrity problem 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    bool knows(int a , int b , vector<vector<int> > &people){
        if(people[a][b] == 1){
            return true;
        }
        return false;
    }
    int celebrity(vector<vector<int> > people , int n){
        stack<int> mystack;
        //adding element to the stack
        int i = 0
        while(i <n){
            mystack.push(i);
            i++;
        }
        while(stack.size()!=1){
            int top1 = mystack.top();
            mystack.pop();
            int top2 = mystack.top();
            mystack.pop();
            if(knows(a,b,people)){
                mystack.push(b);
            }
            else {
                mystack.push(a);
            }
        }
        int last_ele = mystack.top();
        //conforming that the last_ele is the right

        bool is_right = true; 
        int iscount = 0;
        for(int i = 0;i<n;i++){
            if(people[last_ele][i] == 1){
                is_right=false;
                break;
            }
            iscount += people[i][last_ele];
        }
        if(iscount == n-2){
            is_right = true;
        }
        if(is_right == true){
            return last_ele;
        }
        return -1;
    }
}