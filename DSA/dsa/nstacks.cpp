#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Nstacks {
private:
    vector<int> arr;  // Array to hold elements for multiple stacks
    vector<int> top;  // Array to hold the top index of each stack
    int capacity;     // Total capacity of the array
    int n;            // Number of stacks
    int k;            // Capacity of each stack

public:
    Nstacks(int n, int k) {
        this->n = n;
        this->k = k;
        capacity = n * k;
        arr.resize(capacity);
        top.resize(n, -1); // Initializing top index for each stack as -1 (empty stack)
    }

    bool isFull(int sn) {
        return top[sn] == (sn + 1) * k - 1; // Check if the stack is full
    }

    bool isEmpty(int sn) {
        return top[sn] == -1; // Check if the stack is empty
    }

    void push(int sn, int data) {
        if (isFull(sn)) {
            throw overflow_error("Stack is full. Cannot push.");
        }
        int idx = sn * k + top[sn] + 1; // Calculate index for the next element in the stack
        arr[idx] = data; // Insert data at the calculated index
        top[sn]++; // Update top index for the stack
    }

    int pop(int sn) {
        if (isEmpty(sn)) {
            throw underflow_error("Stack is empty. Cannot pop.");
        }
        int idx = sn * k + top[sn]; // Calculate index for the top element in the stack
        int data = arr[idx]; // Get the data from the top index
        top[sn]--; // Update top index for the stack
        return data;
    }
    void print_s(int sn){
        while(!isEmpty(sn)){
            int idx = sn*k + top[sn];
            cout<<arr[idx]<<" ";
            top[sn]--;
        }
        cout<<endl;
    }
};
int main(){
    Nstacks s(4,3);
    s.push(1,1);
    s.push(1,1);
    s.push(1,1);
    s.push(2,1);
    s.push(2,1);
    s.push(2,1);
    s.push(3,1);
    s.push(3,1);
    s.push(3,1);
    s.push(4,1);
    s.push(4,1);
    s.push(4,1);
    
    s.print_s(1);
    s.print_s(2);
    s.print_s(3);
    s.print_s(4);
    return 0;


}
