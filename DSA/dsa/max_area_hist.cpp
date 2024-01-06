#include<bits/stdc++.h>
using namespace std;
//code for max area of rectanglle in an histogram
class Solution{
    public :
    int max_area(vector<int> &heights,int n){
        stack<int> mystack;
        int max_area = INT_MIN;
        int i=0;
        while(i<n){
            if(mystack.empty() || heights[mystack.top()]<= heights[i]){
                mystack.push(i++);
            }
            else{
                int top_idx = mystack.top();
                mystack.pop();
                int width = mystack.empty()?i:i-mystack.top()-1;
                int area = heights[top_idx] * width;
                max_area = max(max_area , area);
            }
        }
        while(!mystack.empty()){
            int top_ele = mystack.top();
            mystack.pop();
            int width = mystack.empty() ? i : i - mystack.top() -1;
            int area = heights[top_ele] * width;
            max_area = max(max_area , area);
        }
        return max_area;
    }

};
int main(){
    Solution s1;
    vector<int> histop = {2,1,5,6,2,3,1};
    cout<<"the max area of rectangle : " << s1.max_area(histop , histop.size())<<endl;
    return 0;
}