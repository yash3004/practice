#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int priority(char op) {
        unordered_map<char, int> mymap = {{'*', 2}, {'/', 2}, {'+', 1}, {'-', 1}};
        return mymap[op];
    }

    string infToPost(string arr) {
        string ans;
        stack<char> mystack;

        for (char i : arr) {
            if (isalnum(i)) {
                ans += i;
            } else if (i == '(') {
                mystack.push(i);
            } else if (i == ')') {
                while (!mystack.empty() && mystack.top() != '(') {
                    ans += mystack.top();
                    mystack.pop();
                }
                if (!mystack.empty() && mystack.top() == '(') {
                    mystack.pop(); // Discard the '('
                }
            } else {
                while (!mystack.empty() && priority(mystack.top()) >= priority(i)) {
                    ans += mystack.top();
                    mystack.pop();
                }
                mystack.push(i);
            }
        }

        // Pop remaining operators from stack
        while (!mystack.empty()) {
            ans += mystack.top();
            mystack.pop();
        }

        return ans;
    }
    int stack_search(stack<int> &mystack , int num , int count){
        if(stack.empty()){
            return -1;
        }
        int exp_num = stack.top();
        else if(exp_num == num){
            return count;
        }
        stack.pop();
        return stack_search(mystack , num , count+1);
        stack.push(exp_num);
    }
};

int main() {
    Solution s1;
    string arr = "(a+b)*(c-d)";
    cout << s1.infToPost(arr) << endl;

    return 0;
}
