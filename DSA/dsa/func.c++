#include<iostream>
#include<unordered_map>
using namespace std;
class Fun{
    public:

    int fact(int n){
        if(n<=1){
            return 1;
        }
        return n*fact(n-1);
        }
        int nCr(int n , int r){
            return (fact(n)/(fact(r)*fact(n-r)));

            

            }
        int isprime(int n , int div){
            if(n < 2){
                return false;
            }
            if(div * div > n){
                return true;
            }
            if(n%div == 0){
                return false;
            }
            return isprime(n , div+1);
        }
        int getap(vector<int>arr1  , int n){
            float d = 0;
            int a = arr1[0];
            for(int i=0;i<arr1.size();i++){
                float tempd = arr1[i+1]-arr1[i];
                if(arr1[i+2]==arr1[i+1]+tempd){
                    d = tempd;
                    return (a+(n-1)*d);
                }
                
                
            }
            return 0;
            
        
         }
         int set_bits(int a, int b) {
            int res = 0;
            
            while (a != 0 || b != 0) {
                // Check the least significant bits of 'a' and 'b'.
                if ((a & 1) == 1) {
                    res++;
                }
                if ((b & 1) == 1) {
                    res++;
                }
                
                // Right shift both 'a' and 'b' to check the next bits.
                a >>= 1;
                b >>= 1;
            }
            
            return res;
        }
        int sim_bin(int arr1[] , int tar , int n ){
            int l = 0;
            int h = n-1;
            while(l<=h){
                int mid = (l+h)/2;
                if(arr1[mid] == tar){
                    return mid;
                }
                if(arr1[mid] > tar){
                    h=mid-1;
                }
                if(arr1[mid]<tar){
                    l=mid+1;
                }
            }
            return -1;
           
        }
        int rec_bin(int arr1[] , int l , int h , int tar){
                if(h>=l){
                    int mid = (h+l)/2;
                    if(arr1[mid] == tar){
                    return mid;
                }
                if(arr1[mid] < tar){
                    return rec_bin(arr1 , mid + 1 , h ,tar );
                }
                if(arr1[mid] > tar){
                    return rec_bin(arr1 , l , mid-1 , tar );
                }
                
                }
                return -1;
                
            }
        int binary_search(int arr[] , int tar , int n){
            
            int l=0;
            int h=n-1;
            
            return rec_bin(arr , l , h , tar);

        }
        int find_unique(int *arr , int n){
            int ans = 0;
            for(int i=0;i<n;i++){
                ans = ans^i;
            }
            return ans;
        }
       int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int ans = 0;
	for(int i=0;i<arr.size();i++){
		ans = ans^arr[i];
	}
	for(int i=1;i<arr.size();i++){
		ans = ans ^ i;
	}
	return ans;
	


	
}
       
        };
        

    

    
int main(){
    Fun f1;
    cout<<f1.fact(5)<<endl;
    cout<<f1.nCr(12,5)<<endl;
    cout<<f1.isprime(111 , 2)<<endl;
    // vector<int> vect1;
    // for(int i=0;i<4;i++){
    //     int term;
    //     cin>>term;
    //     vect1.push_back(term);
       


    // }
    // cout<<f1.getap(vect1 , 7);
    cout<<f1.set_bits(2,3)<<endl;
    int arr3[] = {8,7,2,5,4,7,1,3,6};
    cout<<f1.sim_bin(arr3, 2 , 5)<<endl;
    const char * arr[6] = {"a" , "b" , "b" , "c" ,"a"};
    cout<<f1.findDuplicate(&arr3 , 6);
    

    }
    