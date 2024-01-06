//2d arrays

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> rowsum(vector<vector<int> > arr ){
        vector<int> res;

        for(int i =0;i<arr.size();i++){
            int sum=0;
            for(int j = 0;j<arr[i].size();j++){
                sum+=arr[i][j];
                

            }
            res.push_back(sum);
        }
        return res;
    }
    vector<int> colsum(vector<vector<int> > arr){
        vector<int> res;

        for(int j=0;j<arr.size();j++){
            int sum=0;
            for(int i=0;i<arr[j].size();i++){
                sum+=arr[i][j];

            }
            res.push_back(sum);
        }
        return res;
    }
    void insert_val(vector<vector<int> >& arr){
        for(int i=0;i<arr.size();i++){
            for(int j = 0;j<arr[i].size();j++){
                cin>>arr[i][j];
            }
        }

    }
    void print_2d(vector<vector<int> > arr){
        for(int i=0;i<arr.size();i++){
            for(int j = 0;j<arr[i].size();j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void print_d(vector<int> arr){
        for(int i =0 ;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void wave_print(vector<vector<int> > arr ){
        int count = 0;
        for(int i=0;i<arr.size();i++){
            if(count%2==0){
                for(int j = 0;j<arr[i].size();j++){
                    cout<<arr[i][j]<<" ";
                }
            }
            else{
                for(int j =arr[i].size()-1;j>=0;j--){
                    cout<<arr[i][j]<<" ";
                }
            }
            count++;
        }
    }
    
};
int main(){
    Solution s1;
    vector<vector<int> > arr(3 , vector<int>(3,0));
    s1.print_2d(arr);
    s1.insert_val(arr);
    s1.print_2d(arr);
    vector<int> sum = s1.rowsum(arr);
    s1.print_d(sum);
    vector<int> csum = s1.colsum(arr);
    s1.print_d(csum);
    s1.wave_print(arr);


    
}
