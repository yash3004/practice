#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int priority(char op) {
        unordered_map<char, int> mymap = {
            {'-', 1}, {'+', 2}, {'*', 3}, {'/', 4}
        };
        return mymap[op];
    }

    int solve(char op, int num1, int num2) {
        switch (op) {
            case '+': return num1 + num2; break;
            case '-': return num1 - num2; break;
            case '*': return num1 * num2; break;
            case '/': return num1 / num2; break;
        }
        return 0;
    }

    int evaluateExpression(string arr) {
        stack<int> operands;
        stack<char> operators;

        for (int i = 0; i < arr.length(); i++) {
            if (arr[i] == ' ') {
                continue; // Skip spaces
            } else if (isdigit(arr[i])) {
                int operand = 0;
                while (i < arr.length() && isdigit(arr[i])) {
                    operand = operand * 10 + (arr[i] - '0');
                    i++;
                }
                i--; // Move back one step to handle non-digit character
                operands.push(operand);
            } else if (arr[i] == '(') {
                operators.push(arr[i]);
            } else if (arr[i] == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    int operand2 = operands.top();
                    operands.pop();
                    int operand1 = operands.top();
                    operands.pop();
                    char op = operators.top();
                    operators.pop();
                    operands.push(solve(op, operand1, operand2));
                }
                if (!operators.empty() && operators.top() == '(') {
                    operators.pop(); // Pop '('
                }
            } else {
                while (!operators.empty() && priority(operators.top()) >= priority(arr[i])) {
                    int operand2 = operands.top();
                    operands.pop();
                    int operand1 = operands.top();
                    operands.pop();
                    char op = operators.top();
                    operators.pop();
                    operands.push(solve(op, operand1, operand2));
                }
                operators.push(arr[i]);
            }
        }

        while (!operators.empty()) {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            char op = operators.top();
            operators.pop();
            operands.push(solve(op, operand1, operand2));
        }

        return operands.top();
    }
};

int main() {
    Solution solution;
    string expression = "2-3*1";
    int result = solution.evaluateExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}
