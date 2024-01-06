#include<iostream>
using namespace std;
class Solution {
    public:
    void pat(){
        char str[] = "******";
        char *p = &str[0];
        for(int i=0;i<1000;i++){
            p+=1;
            cout<<p<<endl;
        }
    }
};
int main(){
    int arr[] = {1,3,4,5};
    cout<<&arr[3]<<" "<<&arr<<endl;
    Solution s1;
    s1.pat();

}