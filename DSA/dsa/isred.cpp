//code for redundant brackets 
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isredundant(string arr){
        stack<char> mystack;
        for(char i :arr){
            if(i == ')'){
                bool hasoperator = false;
                char top = mystack.top();
                mystack.pop();
                while(top != '('){
                    
                    if(top == '+' || top == '-' || top == '*' || top =='/'){
                        hasoperator = true;
                    }
                    top = mystack.top();
                    mystack.pop();
                    

                }
                if(!hasoperator){
                    return true;
                }
               
            }
             else{
                    mystack.push(i);
                }
        }

    return false;
    }
};
int main(){
    Solution s1;
    string a  = "(a+b)+(a+b)";
    cout<<s1.isredundant(a)<<endl;
    return 0;
    
}