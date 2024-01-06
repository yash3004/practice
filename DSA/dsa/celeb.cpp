//code for the celebrity 
#include<bits/stdc++.h>
using namespace std;
class Sol{
    public :
    bool knows(int i , int j , vector<vector<int> > arr){
        if(arr[i][j] == 1){
            return true;

        }
        return false;
    }
    int celebrity(vector<vector<int> > &people , int n){
        //creating a stack and pushing the people in it 
        stack<int> my_stack;
        int i=-1;
        while(++i != n ){
            my_stack.push(i);
            cout<<i<<" ";
        }
        while(!my_stack.empty()){
            int i = my_stack.top();
            my_stack.pop();
            int j = my_stack.top();
            my_stack.pop();
            if(knows(i,j,people)){
                my_stack.push(j);

            }
            if(knows(j,i,people)){
                my_stack.push(i);
            }
        }
        int celeb = my_stack.top();
        return celeb;
        

    }
};
int main(){
    Sol s1;
    vector<vector<int> > arr =  {{0, 1 ,0},
                                {0 ,0 ,0}, 
                                {0 ,1, 0}};
    cout<<s1.celebrity(arr , 3);
    return 0;
}