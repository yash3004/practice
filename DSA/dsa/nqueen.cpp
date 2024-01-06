//nqueens problem 
#include<bits/stdc++.h>
using namespace std;
class Backtrack{
    public:
    void print_vector(vector<vector<string> >&ans){
        for(auto const &c:ans){
            for(auto const &r:c){
                cout<<r<<" ";

            }
            cout<<endl;
        }
    }
   bool is_safe(int row , int col , vector<string> &board,int n){
       // Check if there's a queen in the current row
    for (int i = col; i < n; ++i) {
        if (board[row][i] == 'q') {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'q') {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < n && j >= 0; ++i, --j) {
        if (board[i][j] == 'q') {
            return false;
        }
    }

    return true;
    }
   void solve(vector<vector<string>> &ans, vector<string> &output, int col, int n) {
    if (col == n) {
        ans.push_back(output);
        return;
    }

    for (int row = 0; row < n; row++) {
        if (is_safe(row, col, output, n)) {
            output[row][col] = 'q';
            solve(ans, output, col + 1, n);
            output[row][col] = '.';
        }
    }
}
    vector<vector<string> > nqueens(int n){
        vector<vector<string> > ans;
        vector<string> board(n,string(n,'.'));
        solve(ans , board , 0,n);
        return ans;

    }

};
int main()
{
    Backtrack b1;
    vector<vector<string> > nq = b1.nqueens(4);
    b1.print_vector(nq);
    return 0;


}