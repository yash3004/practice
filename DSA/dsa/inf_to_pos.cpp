#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    int priority(char op){
        unordered_map<char , int> mymap = {{'+' , 1} , {'-' , 1} , {'*' , 2} , {'/' , 2}};
        return mymap[op];
    }
    string inf_to_pos(string arr){
        //itertate throgh the string 
        stack<char> mystack;
        string ans;
        for(char i : arr){
            if(isalnum(i)){
                ans+=i;
            }
            else if(i == '('){
                mystack.push(i);
                
            }
            else if(i == ')'){
                while(!mystack.empty() && mystack.top() != '(')
                {
                    ans += mystack.top();
                    mystack.pop();
                }
                if(!mystack.empty()){
                    mystack.pop();
                }

            }
            else{
                while((!mystack.empty()&&mystack.top()) >= priority(i)){
                    ans+=mystack.top();
                    mystack.pop();
                }
                mystack.push(i);

            }

        }
        while(!mystack.empty()){
            ans+=mystack.top();
            mystack.pop();
        }
        return ans;
    }
    string inf_to_pre(string arr){
        reverse(arr.begin() , arr.end());
        string ans = inf_to_pos(arr);
        reverse(ans.begin() , ans.end());
        return ans;


    }
};
int main(){
    Solution s1;
    string arr = "a+b-(c*d)/e";
    cout<<s1.inf_to_pos(arr)<<endl;
    cout<<s1.inf_to_pre(arr)<<endl;

}