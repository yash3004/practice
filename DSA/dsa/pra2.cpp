//code for finding the adjacent elements of a selected element in the row and col 
#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int find_adj(vector<vector<int> >&arr , int row , int col){
        vector<int> ans ;
        int sum = 0;
        int count = 0;
        vector<int> dirr = {-1,-1,-1,0,0,1,1,1};
        vector<int> dirc = {-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<9;++i){
            int n_row = row+dirr[i];
            int n_col = col+dirc[i];
           
                if(n_row >= 0 && n_col >= 0 && n_row<row && n_col <col){
            
                ans.push_back(arr[n_row][n_col]);
                sum+=arr[n_row][n_col];
                count++;
                }
            }
            
        
        return ((count > 0) ? sum / count : 0);

    }
    void print_vector(vector<vector<int>> ans){
        int n=ans.size();
        int m= ans[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void print_arr(vector<int> arr){
        for(int i:arr){
            cout<<i<<" ";
        }

    }

    vector<vector<int > > smooth_img(vector<vector<int > > &img){
        vector<vector<int> > ans(3,vector<int>(3,0));
        for(int i=0;i<img.size();i++){
            for(int j=0;j<img[0].size();j++){
                ans[i][j] = find_adj(img , i , j);
            }
        }
        return ans;
    }
};
int main(){
    Solution s1;
    vector<vector<int> > arr = {{1,1,1},
                                {1,0,1},
                                {1,1,1}};
    s1.print_vector(arr);
    cout<<s1.find_adj(arr , 1,1);
    vector<vector<int> > smooth_arr = s1.smooth_img(arr);
    s1.print_vector(smooth_arr);
    return 0;
return 0;

}