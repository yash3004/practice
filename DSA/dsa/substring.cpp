//code for the substring in c++
#include<bits/stdc++.h>
using namespace std;
class Solve{
    public:
    void permute_string(string a,vector<string>&ans , string output , int idx){
        //base condition 
        if(a.length() <= 0){
            if(output.length() > 0){

                ans.push_back(output);
            }
            return;

        }
        for(int i=0;i<a.length();i++){
            char cur_ele = a[i];
            string new_str = a.substr(0,i) + a.substr(i+1);
            
            permute_string(new_str , ans ,output+cur_ele,idx+1 );


        }

    }
    void substring(string a , vector<string> &ans , string output , int i){
        if(i>=a.length()){
            ans.push_back(output);
            return;
        }
        //excluding the str
        substring(a , ans , output , i+1);
        //including the str
        char s = a[i];
        output.push_back(s);
        substring(a , ans , output , i+1);

    }
    vector<string> substr(string &a){
        vector<string> ans;
        string output = "";
        substring(a , ans , output , 0);
        return ans;
        
    }
    vector<string> permutation(string &a){
        vector<string> ans;
        string output = "";
        permute_string(a , ans , output , 0);
        return ans;


    }
    void print_vec(vector<string> arr){
        for(auto i : arr){
            cout<<i<<" ";
        }
    }
};
int main(){
    Solve s1 ;
    string a = "abc";
    vector<string> ans= s1.substr(a);
    s1.print_vec(ans);
    cout<<"\n";

    vector<string> ans2 = s1.permutation(a);
    cout<<endl;
    s1.print_vec(ans2);



    
}