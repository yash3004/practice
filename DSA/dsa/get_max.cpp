//code for the maximum length can be drawn in an array 
#include<bits/stdc++.h>
using namespace std;
class Sol{
    public :
    bool ischeck(vector<vector <int> > arr , int r , int c , vector <vector <bool> >&visited , int H , int L){
        if(r<0 || c < 0 || r >= L || c >=H || visited[r][c] == true||arr[r][c] == 0){
            return false;
        }
        return true;
    }
    //finding the longest line of 1 using recursion 
    void get_max(vector<vector<int>> &arr , int r , int c , int H , int L , int &size , int &max_size , vector<vector<bool> > &visited){
        //base case 
        if(!ischeck(arr ,r,c,visited,L,H)){
            return;
        }
        visited[r][c] = true;
        size++;
        if(size > max_size){
            max_size = size;
        }
        //direction to moves ie = up down left right 
        int dir[][2] = {{0,1} , {0,-1} , {1,0} , {-1 , 0}};
        for(int i = 0 ; i < 4; i++){
            int newr = r+dir[i][0];
            int newc = c+dir[i][1];
            if(ischeck(arr , newr , newc , visited , H , L)){
                get_max(arr , newr , newc , H , L ,size , max_size , visited);
            }
            
        }
        visited[r][c]=false;
    }
    int get_max_val(vector<vector<int> > arr , int L , int H){
        
        int max_size = 0;
        vector<vector < bool> > visited(L , vector<bool>(H , false));
        for(int i=0;i<L;i++){
         
            for(int j=0;j<H;j++){
                int size = 0;
                get_max(arr , i , j , H , L , size , max_size , visited);
            }
        }
        return max_size;
    }

};
int main(){
    Sol s1;
    vector<vector<int> > arr = {{1,1,0,0,0},
                            {0,1,1,0,0},
                            {0,0,1,0,1},
                            {1,0,0,0,1},
                            {0,1,0,1,1}};
    int get_max_val = s1.get_max_val(arr , arr.size() , arr[0].size());
    cout<<get_max_val<<endl;    
    
}