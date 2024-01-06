#include<bits/stdc++.h>
using namespace std;
bool is_valid(string &arr){
    unordered_map<char , char>mymap = {{')' , '('} , {'}' , '{'} , {']' , '['}};
    stack<char> mystack;
    for(char i:arr){
        if(mymap.find(i)!=mymap.end()){//encountered an closed bracket
            char top_ele = mystack.empty() ? '#' : mystack.top();
            if(top_ele!=mymap[i]){
                return false;
            }
            mystack.pop();
        }
        else{
            mystack.push(i);
        }
        }
        return mystack.empty();
}

int main(){
    string arr = "(())()()()";
    cout<<is_valid(arr);
}