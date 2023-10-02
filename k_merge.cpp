//program for merging the k sorted arrays:
#include<iostream>
#include<stdio.h>
using namespace std;

class Solution{
    public:
    void merge_k(vector<int> &arr2 , vector<vector <int> > arr1 , int k , int n){
        //simple we have to append and sort the array 
        for(int i = 0 ;i<n;i++){
            for(int j = 0;j<k;j++){
                arr2[ (i*n) + j] = arr1[i][j];
            }
        }
        sort(arr2.begin() , arr2.end());
    }
    void print_arr(vector<int> arr , int n){
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
}
};

int main(){
    Solution s1;
    int n = 4;
    int k = 3;
     vector <vector <int> > arr = { { 5, 7, 15, 18 },
                     { 1, 8, 9, 17 },
                     { 1, 4, 7, 7 } };
    //  int n = 
      vector <int> arr1 (n*k);
    
    // cout<<sizeof(arr)/sizeof(arr[0]);
    // s1.merge_k(a)
    
    s1.merge_k(arr1 , arr , k , n);
    s1.print_arr(arr1 , (n*k));
    cout<<"hello world"

    
    
}