//for merging 2 sorted arrays 
#include<iostream>
#include<string>
using namespace std;
// int merge_a(int arr1[] , int arr2[]){
//     int n = arr1.size();
//     int m = arr2.size();
//     int res[m+n];
//     int i=0;
//     int j=0;
//     int k=0;
//     while(k<(m+n)){
//         if(arr1[i]<arr2[j]){
//             res[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             res[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     return res;
    

// }
// void print_arr(int arr[] , int n){
//     for(int i= 0;i<n;i++){
//         cout<<arr[i];
//     }
// }
void str_convert(string a){
    int sum = 0;
    for(int i=0;i<a.length();i++){
        sum+=int(i);
    }
    cout<<sum<<endl;
}
int main(){
    // int arr1[] = {1,2,3,4};
    // cout<<endl;
    // int arr2[] = {1,3,5,5};
    // cout<<endl;
    // int arr3[] = merge_a(arr1 , arr2);
    // print_arr(arr3 , 8);
    str_convert("123456");
}