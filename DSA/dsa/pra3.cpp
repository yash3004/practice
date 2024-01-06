//doing the pra
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<long long int>print_neg(vector<long long int> arr, int  k){
        vector<long long int> ans;
        deque<long long int> a(k);
        for(int i=1;i<arr.size();i++){
            a.push_back(i-1);
            a.push_back(i);
            if(arr[a.front()] < 0) {
                ans.push_back(arr[a.front()]);
            }
            else if(arr[a.back()] < 0){
                ans.push_back(arr[a.front()]);
            }
            else{
                ans.push_back(0);
            }
            a.pop_front();

        }
        return ans;
    }
    void print_vec(vector<long long int> a){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Solution s1;
    vector<long long int> arr = {-8 , 2,3,-6,10};
    vector<long long int> ans =s1.print_neg(arr , 2);
    s1.print_vec(ans);
    return 0;
    
}