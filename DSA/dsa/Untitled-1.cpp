//code for the substring in c++
#include<bits/stdc++.h>
using namespace std;
class Solve{
    void substring(string a , vector<string> &ans , string output , int i){
        if(i>=a.length()){
            ans.push_back(output);
            return;
        }
        //excluding the str
        substring(a , ans , output , i+1);
        //including the str
        char a = string[i];
        output.push_back(a);
        substring(a , ans , output , i+1)

    }
    vector<string> substr(string &a){
        vector<string> ans;
        string output = "";
        
    }
}
int main(){
    Solve s1 ;
    
}