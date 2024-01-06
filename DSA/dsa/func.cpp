//parameter passing call by refrence 

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
class Function_param{

public:
int swap(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    return 0;
}
int * array1(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));
    cout<<"enter the elements:"<<endl;
    for(int i =0 ;i<n;i++){
        cin>>*(p+i);
    }
    return p;
}
void print_arr(int arr[] , int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int pivot_ele(vector<int> nums){
    int i =0;
    int j = nums.size()-1;
    while(i<j){
        int mid = i+(j-i)/2;
        if(nums[mid] >= nums[0]){
            i = mid+1;

        }
        else{
            j = mid;
        }


    }
    return i;
}
int bin_search(int arr[] , int k, int i , int j){
    int s = i;
    int e = j;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid] < k){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        
    }
    return -1;
}
int floorSqrt(int n)
{
    // Write your code here.
    int i = 0;
    int j = n;
    int ans = -1;
    int mid = i+(j-i)/2;
    while(i<=j){
        
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid < n){
            
            i = mid+1;
            ans = mid;
        }
        else{
            j = mid-1;
        }
        mid = i+(j-i)/2;

    }
    return ans;
}
double moreprec(int tempsol , int precise , int n){
    double ans = 0 ;
    double factor = 1;
    while(precise > 0){
        factor/=10;
        precise--;
        for(double j = tempsol;j*j<n;j+=factor){
            ans = j;

        }


    }
    return ans;
}
void aascival(char c){
   cout<<int(c-'a')<<endl;
   
}



};
int main(){
    // int a = 45;
    // int b = 55;
    Function_param f1;

    // int c = f1.swap(a , b);
    // cout << a << b << endl;

    // int *v;
    // v = f1.array1(5);
   
    // f1.print_arr(v , 5);
    // vector<int> v1;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int n;
    //     cin>>n;
    //     v1.push_back(n);
        
    // }
    //  for(int i=0;i<n;i++){
    //     cout<<v1[i];
        
    // }
    
    
    
    // cout<<f1.pivot_ele(v1);
    int arr[] = {1,2,3,4,5,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int k = 7;
    cout<<f1.bin_search(arr , k , i , n-1)<<endl;
    int tempsol = f1.floorSqrt(26);
    double sq_root = f1.moreprec(tempsol  , 3 , 26);
    cout<<sq_root<<endl;
    f1.aascival('b');
}