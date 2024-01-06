#include <vector>
#include<bits/stdc++.h>
using namespace std;

void back_track(vector<vector<int> >& ans, vector<int>& sum, vector<int> candidate, int tar) {
    if (tar == 0) {
        ans.push_back(sum); // If the target is zero, the current combination sums up to the target
        return;
    }
    
    for (int i = 0; i < candidate.size(); ++i) {
        if (tar - candidate[i] >= 0) {
            sum.push_back(candidate[i]); // Add the current candidate to the sum
            back_track(ans, sum, candidate, tar - candidate[i]); // Recursively explore combinations
            sum.pop_back(); // Backtrack: Remove the current candidate from the sum
        }
    }
}

int main() {
    vector<vector<int> > ans;
    vector<int> sum;
    vector<int> candidates = {1,2,3,4,5,6,7,8,9,10};
    int target = 7;

    back_track(ans, sum, candidates, target);

    // Printing the resulting combinations
    for (auto& combination : ans) {
        for (auto& num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
