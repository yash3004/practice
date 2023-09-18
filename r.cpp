//code for the arrays
#include<iostream>
using namespace std;

class Array{
    public:
    int search(int arr[] , int n , int key){
        for(int i = 0;i<n;i++){
            if(arr[i] == key){
                return i;
            }
            
        }
        return -1;
    }

    int insert(int arr[] , int p , int e , int n ){
        if(p >= n){
            cout<<"error --limit exeded !";
            return n;
        }
        for(int i = n-1;i>=p;i--){
            arr[i+1] = arr[i];
        }
        arr[p] = e;
        return n + 1;

    }
    int a_delete(int arr[] , int e , int n){
        int pos = search(arr , n , e);
        for(int i = pos;i<n-1;i++){
            arr[i] =arr[i+1];
        }
        return n-1;

    }

    void print_arr(int arr[] , int n){
        for(int i=0;i<n;i++){
            cout<<" "<<arr[i];
        }
    }
    




};
int main(){
    int arr[]  = {1,2,4,5,3,2,1,2,3};
    int n = 9;
    Array a1;
    a1.print_arr(arr ,n );
    int m;
    m = a1.insert(arr , 3, 5 , n);
    a1.print_arr(arr,m);
    return 0;
}