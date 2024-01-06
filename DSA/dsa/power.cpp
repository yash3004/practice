#include<bits/stdc++.h>
using namespace std;
//code for the power set 
class Sol{
    public:
    void helper(vector<vector<int>> &ans , vector<int> &output , vector<int> arr , int idx){
        ans.push_back(output);
        
        //exclueding the output
        for(int i=idx;i<arr.size();i++){
            output.push_back(arr[i]);
            //including the helper 
            helper(ans,output , arr ,i+1);
            output.pop_back();
            
        }
    }
    vector<vector<int>> power(vector<int> arr){
        vector<vector<int> > ans;
        vector<int> output;
        helper(ans , output , arr , 0);
        return ans;

    }
    void print_vect(vector<vector<int>> arr){
        for(auto const i : arr){
            for(int j : i){
                cout<<j<<",";
            }
            cout<<"/";
        }
        cout<<endl;
    }
    int min_idx(vector<int> arr){
        int i=0;
        int min_idx=0;
        while(i<arr.size()){
            if(arr[min_idx] > arr[i]){
                min_idx = i;
            }
            i++;
        }
        return min_idx;
    }
    int max_val(vector<int> arr){
        int min = min_idx(arr);
        int max_val = INT_MIN;
        if(min == arr.size()){
            return 0;
        }
        for(int i=min;i<arr.size();i++){
            max_val = max(max_val , arr[i]);
        }
        return (max_val-arr[min]);
    }
    void print_arr(vector<int>arr , int idx){
        int n=arr.size();
        int i=0;
        while(i<n){
            cout<<arr[(i+idx)%n];
            i++;
        }
        
    

    }
};
int main(){
    Sol s1;
    vector<int> arr = {7,1,5,3,6,4};
    // vector<vector<int>> ans = s1.power(arr);
    // s1.print_vect(ans);
    cout<<s1.max_val(arr);
    s1.print_arr(arr , 2);
    return 0;
    


}