#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
   int c_ways(string &arr , int i){
    if(i >= arr.length()){
        return 1;
    }
    if(arr[i] == '0'){
        return 0;
    }
    //for empty
    int ways = c_ways(arr , i+1);

    if(i+1 < arr.length() && stoi(arr.substr(i , 2)) <= 26){
        ways+=c_ways(arr , i+1);
    }
    return ways;
   }
    int countWays(string& arr) {
        int count = c_ways(arr , 0);
        return count;
    }
};

int main() {
    Solution s1;
    string arr = "226";
    int ans = s1.countWays(arr);
    cout << ans << endl;
    return 0;
}
