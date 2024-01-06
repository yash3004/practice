//stack search
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

        int stack_search(stack<int> &mystack , int num , int count){
        if(mystack.empty()){
            return -1;
        }
        int exp_num = mystack.top();
        if(exp_num == num){
            return count;
        }
        mystack.pop();
        return stack_search(mystack , num , count+1);
        mystack.push(exp_num);
    }
};
int main(){
    Solution s1;
    stack<int> mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    mystack.push(6);
    mystack.push(7);
    mystack.push(8);
    cout<<s1.stack_search(mystack , 8 , 0);




}