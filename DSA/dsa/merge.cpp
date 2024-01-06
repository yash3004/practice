#include<bits/stdc++.h>
using namespace std;
vector<int> res(vector<int> arr1 , vector<int> arr2){
    vector<int> res;
    int n = arr1.size() , m =arr2.size();
    int i =0;
    int j= 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            res.push_back(arr1[i]);
            i++;
            
        }
        else{
            res.push_back(arr2[j]);
            j++;
        }
        //balancing 
       
    }
     while(i<n){
            res.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            res.push_back(arr2[j]);
            j++;
        }
        return res;
}
void print_arr(vector<int>arr){
    for(auto i:arr){
        cout<<i<<" "; 
    }
}
int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 4, 5,1,2,3,4,5,7,899,7};
    vector<int> arr3 = res(arr1 , arr2);
    print_arr(arr3);
    

}