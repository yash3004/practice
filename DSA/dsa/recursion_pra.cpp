//recursion 
#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
    void saydigit(int n , string arr[]){
        if(n<=0){
            return;
        }
        int digit = n%10;
        
        
        saydigit(n/10 , arr);
        cout << arr[digit] << " ";
    }
    int recursion_bsearch(int arr[] , int tar , int l , int r){
        int mid = (l+r)/2;
        if(tar == arr[mid]){
            return mid;
        }
        else if(tar > arr[mid]){
            return recursion_bsearch(arr , tar , mid + 1 , r);

        }
        else {
            return recursion_bsearch(arr , tar , l , mid -1);
        }

    }
    bool issorted(int arr[] , int size){
        if(size <= 1){
            return true;
        }
        if(arr[size] < arr[size-1]){
            return false;
        }
        return issorted(arr , size-1);
    }
    int getsum(int arr[] , int size){
        if(size == 0){
            return 0;
        }
        return arr[size-1] + getsum(arr ,size-1);
    }
   void rev_string(string &str, int i, int j) {
    if (i >= j) {
        return;
    }
    swap(str[i] , str[j]);
    rev_string(str , i+1 , j-1);
    
    }
    bool check_palid(string &str , int i){
        int j = str.length()-1-i;
        if(i>j){
            return true;
        }
        
        if(str[i] != str[j]){

            return false;
        }
        else{
            return check_palid(str , i+1);
        }
       
        
    }
    int power(int k , int n){
        //base case
        if(n==0){
            return 1;

        }
        if(n == 1){
            return k;
        }
        //recursive call 
        int ans = power(k , n/2);
        if(n % 2 == 0 ){
            return ans*ans;
        }
        else {
            return k*ans*ans;
        }
    }
    void bub_sort(int *arr, int size ){
        if(size == 0 || size == 1){
            return;
        }

        for(int i=0;i<size-1;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
        }
        
        bub_sort(arr ,size -1);
        
    }
    void print_arr(int *arr , int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    void merge(int *arr , int s , int e){
        int mid = (s+e)/2;
        int len1 = mid - s + 1;
        int len2 = e - mid;
        int *left = new int[len1];
        int *right = new int[len2];
        //adding the value to the arrays 
        int k = s;

        for(int i=0;i<len1;i++){
            left[i] = arr[k++];
        }
        k = mid+1;
        for(int i = 0; i<len2;i++){
            right[i] = arr[k++];
        }
        int index1 = 0;
        int index2 = 0;
        k = s;
        
        //merging the two arrays 

        while(index1 < len1 && index2 < len2){
            if(left[index1] < right[index2]){
                arr[k++] = left[index1++];
            }
            else{
                arr[k++] = right[index2++];
            }
     
        }
        while(index1<len1){
            arr[k++] = left[index1++];
        }
        while(index2<len2){
            arr[k++] = right[index2++];
        }
        delete []left;
        delete []right;
    }
    void merge_sort(int *arr , int s , int e){
        
      

        if(s>=e){
            return;
        }
        int mid = (s+e)/2;
        //for left
        merge_sort(arr , s , mid);
        //for right
        merge_sort(arr , mid+1 , e);

        merge(arr , s , e);
    }


};
int main(){
    Solution s1;
    string arr[] = {"zero" ,"one" , "two" , "3" , "4" , "5" , "6" , "7" , "8" , " 9"};
    s1.saydigit(512 , arr);
    cout<<"\n";
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int ans = s1.recursion_bsearch(arr1 , 4 , 0 , n);
    cout<<ans<<endl;
    bool issorted = s1.issorted(arr1 , sizeof(arr1)/sizeof(arr1[0]));
    cout<<issorted<<endl;
    int getsum = s1.getsum(arr1 , n);
    cout<<getsum<<endl;
    string text = "121";
    int len = text.length();
    

    cout << "Original String: " << text << endl;
    s1.rev_string(text, 0, len - 1);
    cout << "Reversed String: " << text << endl;
    bool ans2 = s1.check_palid(text , 0);
    cout<<ans2<<endl;
    int ans3 = s1.power(2,30);
    cout<<ans3<<endl;
    int arr4[] = {2,3,4,1,5,6,7};
    int n2 = sizeof(arr4)/sizeof(arr4[0]);
    cout<<"before_sort"<<endl;
    s1.print_arr(arr4 , n2);

    // s1.bub_sort(arr4 , not2);
    // s1.print_arr(arr4 , sizeof(arr4)/sizeof(arr4[0]));
    s1.merge_sort(arr4 , 0 , n2-1);
    cout<<"after_sort"<<endl;
    s1.print_arr(arr4 , n2);

    

}