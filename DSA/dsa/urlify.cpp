//urlify the string 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string url(string arr){
        string ans;
        for(int i=0;i<arr.length();i++){
            if(arr[i] == ' ' && arr[i+1] >= '0'){
                ans+='2';
                ans+='0';
                ans+='%';

            }
            else if(arr[i] == ' ' && arr[i+1] == ' ' ){
                ans=ans;
            }
            else{
                ans+=arr[i];
            }
            
        }
        return ans;

    }
};
int main(){
    Solution s1;
    string arr = "Mr John Smith     mark    1  @  ";
    cout<<s1.url(arr)<<endl;
}