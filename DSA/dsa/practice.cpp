//using the macros and inline functions 
#include<iostream>
using namespace std;
class Solve{
    public:
    int random(int a,int b){
        int ans = (a > b)? a+b:b-a;
        return ans;
    }
    int pow(int k , int n){
        if(n == 0){
            return 1;
        }
        return k*pow(k , n-1);
    }

    // void toh(vector<vector<int> > &ans , int n ,int a , int b , int c){
    //     if(n == 0){
    //         return ;
    //     }
    //     toh(ans , n-1 , a , c , b);
    //     ans.push_back([a , c]);
    //     toh(ans , n-1, b , c , a);
    // }
    //printing the fiboo series using the
  int steps(int n, int a, int b, int c) {
    // Base case: If n is 0, there's one way to reach the target.
    if (n == 0) {
        return 1;
    }

    // Initialize the count of ways to reach n.
    int count = 0;

    // Check if a, b, and c are not zero and n is non-negative to prevent infinite recursion.
    if (a > 0 && n >= a) {
        count += steps(n - a, a, b, c);
    }
    if (b > 0 && n >= b) {
        count += steps(n - b, a, b, c);
    }
    if (c > 0 && n >= c) {
        count += steps(n - c, a, b, c);
    }

    return count;
}



};
int main(){
    Solve s1;
    cout<<s1.random(2,3)<<endl;
    cout<<s1.pow(6 , 3)<<endl;
    cout<<s1.steps(10 , 1,0,0)<<endl;
    
    
}