//evaluating the postfix using the stacks 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int sol_to(string arr){

        stack<int> mystack;
        for(char i:arr){
            if(isdigit(i)){
                mystack.push(i-'0');

            }
            //if there is an operator
            else{
                int top_ele = mystack.top();
                mystack.pop();
                int top2ele = mystack.top();
                mystack.pop();
                switch(i){
                    case '+' : mystack.push(top_ele+top2ele);break;
                    case '-' : mystack.push(top_ele-top2ele);break;
                    case '*' : mystack.push(top_ele*top2ele);break;
                    case '/' : mystack.push(top_ele/top2ele);break;
                }
            }
        }
        return mystack.top();
    }
};
int main(){
    Solution s1;
    string postfix = "123*+5-";
    cout<<s1.sol_to(postfix);
    return 0;
}