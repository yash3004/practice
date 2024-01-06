//solving the bodmas using the stack 
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int priority(char op){
        unordered_map<char , int> mymap= { 
            {'-' , 1},{'+' , 2} , {'*' , 3} ,{'/' , 4}
        };
        return mymap[op];
    }
    int solve(char op , int num1 , int num2){
        switch(op){
            case '+':return num1+num2;break;
            case '-':return num1-num2;break;
            case '*':return num1*num2;break;
            case '/':return num1/num2;break;

        }
        return 0;
        
    }
    int sol(string arr){
        stack<int> operands;
        stack<char> operators;
        for(int i=0;i<arr.length();i++){
            if(arr[i] == ' '){//skips the spaces 
                continue;
            }
            else if (isdigit(arr[i])) {
                int operand = 0;
                while (i < arr.length() && isdigit(arr[i])) {
                    operand = operand * 10 + (arr[i] - '0');
                    i++;
                }
                i--; // Move back one step to handle non-digit character
                operands.push(operand);
            }
            else if(arr[i] == '('){//store the opening bracket
                operators.push(arr[i]);
            }
            else if(arr[i] == ')'){
                while(!operators.empty() && operators.top() != '('){
                    int top = operands.top();
                    operands.pop();
                    int top2 = operands.top();
                    operands.pop();
                    char op = operators.top();
                    operators.pop();
                    operands.push(solve(op , top , top2));
                    
                    
                }
                if(!operators.empty() && operators.top() == '('){
                    operators.pop();
                }
            }
            else{
                while(!operators.empty() && priority(operators.top()) >= priority(arr[i])){
                    int opr1 = operands.top();
                    operands.pop();
                    int opr2 = operands.top();
                    operands.pop();
                    char op = operators.top();
                    operators.pop();
                    operands.push(solve(op , opr1 , opr2));
                    

                }
                operators.push(arr[i]);
            }

        }
        while(!operators.empty()){
            int opr1 = operands.top();
            operands.pop();
            int opr2 = operands.top();
            operands.pop();
            char op = operators.top();
            operators.pop();
            operands.push(solve(op , opr1 , opr2));
            
        }
        
        return operands.top();

    }
};
int main(){
    Solution s1;
    string arr = "(1+2)*(3*4)";
    cout<<s1.sol(arr);
    return 0;

}