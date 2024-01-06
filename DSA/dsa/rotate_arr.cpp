//kth element rotation 
#include<iostream>
using namespace std;

class Solution{
    public:
    void rotateArray(int arr[], int n, int k) {
    // Reduce the number of rotations
    k %= n;
 
    // Reverse the first part of the array
    reverse(arr, arr + n - k);
 
    // Reverse the second part of the array
    reverse(arr + n - k, arr + n);
 
    // Reverse the entire array
    reverse(arr, arr + n);
}

    void print_arr(int arr[] , int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution s1;
    s1.print_arr(arr,n);
    s1.rotateArray(arr,n,2);
    s1.print_arr(arr,n);

}