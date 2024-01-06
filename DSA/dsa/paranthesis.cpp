//code for generate paranthesiis 
//backtracking 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    void backtrack(vector<string> &ans , int o , int c , string &output){
        if(o == 0 && c ==0){
            ans.push_back(output);
            return;
        }
        if(o!=0){
            string op1 = output;
            op1.push_back('(');
            backtrack(ans,o-1,c,op1);
            
        }
        if(c>o){
            string op2 = output;
            op2.push_back(')');
            backtrack(ans,o,c-1,op2);
        }
    }
    void helper(vector<vector<int> > &ans , vector<int> &output , vector<int> input , int idx){
        ans.push_back(output);
        for(int i=idx;i<input.size();++i){
            output.push_back(input[i]);
            helper(ans,output,input,i+1);
            output.pop_back();
        }
    }
    vector<vector<int> > power_set(vector<int> &set){
        vector<vector<int> > ans;
        vector<int> output;
        helper(ans , output,set , 0);
        return ans;
        
    }
    vector<string> paranthesis(int n){
        vector<string> ans;
        string output;
        int o = n;
        int c = n;
        backtrack(ans , o , c , output);
        return ans;

    }
    void print_vector(vector<vector<int> > ans){
        for (vector<int> &subset : ans) {
            for (int num : subset) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    //code for tower of hanoi 
    void toh(char a,char b , char c , int num){
        if(num==1){
            cout<<"moved"<< 1<<"from "<<a<<"to"<<b<<endl;
            return;

        }
        toh(a,c,b,num-1);
        cout<<"moved"<<num<< "from "<<a<<"to"<<c<<endl;
        toh(c,b,a,num-1);
    }

};
int main(){
    Solution s1;
    
    // vector<string> ans = s1.paranthesis(3);
    // for(string i:ans){
    //     cout<<i<<" ";
    // }
    // return 0;
    vector<int> input = {1,2,3,4};
    vector<vector<int> > ans1 = s1.power_set(input);
    s1.print_vector(ans1);
    s1.toh('s','d','a',3);
    

}