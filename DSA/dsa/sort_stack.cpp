#include <iostream>
#include <stack>

void sort_stack(std::stack<int> &stack, int x) {
    if (stack.empty() || (!stack.empty() && stack.top() < x)) {
        stack.push(x);
        return;
    }
    int pop = stack.top();
    stack.pop();
    sort_stack(stack, x);
    stack.push(pop);
}

void sortStack(std::stack<int> &stack) {
    if (stack.empty()) {
        return;
    }
    int x = stack.top();
    stack.pop();
    sortStack(stack);
    sort_stack(stack, x);
    
}

int main() {
    std::stack<int> st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(3);

    sortStack(st);

    // Print sorted stack
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
    return 0;
}