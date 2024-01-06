#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low + (high - low) / 2]; // Choosing middle element as pivot
        int i = low;
        int j = high;

        while (i <= j) {
           while(arr[i] < pivot){
			i++;
		   }
		   while(arr[j]>pivot){
			j--;
		   }
		   if(i<=j){
			swap(arr[i],arr[j]);
			i++;
			j--;
		   }
        }
        return i;
    }

    void quicksort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quicksort(arr, low, pi - 1);
            quicksort(arr, pi, high);
        }
    }

    vector<int> sortArray(vector<int>& arr) {
        int n = arr.size();
        quicksort(arr, 0, n - 1);
        return arr;
    }
	void print_vec(vector<int> arr){
		for(int i:arr){
			cout<<i<<"-";
		}
		cout<<endl;
	}
};
int main(){
	Solution s1;
	vector<int> arr = {3,2,5,4,1,76,67,34,3};
	s1.print_vec(s1.sortArray(arr));
	return 0;

}
