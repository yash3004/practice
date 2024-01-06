//first k element in c++

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<long long int> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
    {
        //adding all k elemets to the window
        deque<long long int> store;
        int i=0;
        while(i<K){
            store.push_back(A[i++]);
        }
        //check karenge aur update krenge
        vector<long long int> ans;
       
        for(int j = 0; j < N - K + 1; j++) {
            if(!store.empty()) {
                if(store.front() < 0) {
                    ans.push_back(store.front());
                }
                else {
                    ans.push_back(0);
                }
            }
            
            // slide the window
            store.pop_front();
            if(i < N) {
                store.push_back(A[i]);
                i++;
            }
        }
        return ans;

    }
    string non_repeat(string &arr){
        unordered_map<char , int> count;
        queue<char>store;
        string ans = "";
        int i=0;
        while(i<arr.length()){ 
            char ch = arr[i];
            count[ch]++;
            store.push(ch);

            while(!store.empty()){
                if(count[store.front()] > 1){
                    store.pop();
                }
                else{
                    ans.push_back(store.front());
                    break;
                }

            }
            if(store.empty()){
                ans.push_back('#');
            
            }
            i++;
        }
        return ans;
        
    }
   void  print_vec(vector<long long int> arr){
        for(long long int i: arr){
            cout<<i<<" ";
        } 
        cout<<endl;

    }
    void print_vec2(vector<vector<int> >& ans) {
    for (const auto& i : ans) {
        for (int j : i) {
            cout << j << ",";
        }
        cout << endl;
    }
}

    void rev_k_q(queue<int> &arr , int k , int count){
        if(count == k){
            return;
        }
        int fr = arr.front();
        arr.pop();
        rev_k_q(arr,k,count+=1);
        arr.push(fr);
    }
    queue<int> rev_k(queue<int> &arr , int k){
        rev_k_q(arr , 4 , 0);
        return arr;
    }
    void helper(vector<vector<int>> &n_bits , int n , vector<int>&str){
        if(n<1){
            n_bits.push_back(str);
            return;
        }
        str.push_back(0);
        helper(n_bits , n-1 , str);
        str.pop_back();
        str.push_back(1);
        helper(n_bits,n-1,str);
        str.pop_back();
    }
    vector<vector<int> > n_bits(int n){
        vector<vector<int> > ans;
        vector<int> str;
        helper(ans , n , str);
        return ans;


    }
    // vector<vector<int>> convert_to_2d(vector<int> &arr){
    //     unordered_map<int,int> mymap;
    //     while
    // }
};
int main(){
    Solution s1;
    // long long int arr[5] ={-8, 2, 3, -6, 10} ;
    // vector<long long int> ans = s1.printFirstNegativeInteger(arr , 5 , 2);
    // s1.print_vec(ans);
    // vector<vector<int> > ans2 = s1.n_bits(6);
    // s1.print_vec2(ans2);
    // return 0;
    string arr = "aabc";
    cout<<s1.non_repeat(arr);
    return 0;

}