//code for deq
#include<bits/stdc++.h>
using namespace std;
class deq{
    private:
    int *arr;
    int f;
    int rear;
    int size;
    int cap;
    public:
    deq(int n){
        this->cap = n;
        this->size = 0;
        this->f = -1;
        this->rear = f;
        arr = new int [cap];

    }
    bool isfull(){
        return (size==cap);
    }
    bool isempty(){
        return (size==0);
    }
    bool push_front(int data) {
        if (isfull()) {
            return false; // Array is full, insertion failed
        }

        if (isempty()) {
            f = rear = 0; // If the array is empty, set both front and rear pointers to 0
        } else {
            f = (f - 1 + cap) % cap; // Update front pointer in a circular manner
        }

        arr[f] = data; // Insert data at the updated front position
        size++; // Increase size as an element is inserted
        return true; // Insertion successful
    }
    bool push_back(int data){
        if(isfull()){
            return false;
        }
        if(isempty()){
            f = rear = 0;
        }
        else{
            rear = (rear+1)%cap;
        }
        arr[rear] = data;
        size++;
        return true;
    }
    int pop_back(){
        if(isempty()){
            return -1;
        }
        int ans = arr[rear];
        if(size==1){
            f=rear=-1;
        }
        rear--;
        size--;
        return ans;

    }
    int pop_front() {
        if (isempty()) {
            return -1; // If the deque is empty, return -1 or an appropriate value indicating failure
        }

        int ans = arr[f]; // Store the element to be removed

        if (size == 1) {
            f = rear = -1; // Reset front and rear when the deque has only one element
        } else {
            f = (f + 1) % cap; // Move the front pointer circularly to the next element
        }

        size--; // Decrease size as an element is removed
        return ans; // Return the removed element
    }
};
void print_q(deq q) {
    // Create a temporary deque to preserve the original
    while (!q.isempty()) {
        cout << q.pop_front() << " ";
    }
    cout << endl;
}

int main() {
    deq* d = new deq(10);
    d->push_back(1);
    d->push_front(2);
    d->push_back(1);
    d->pop_back();
    print_q(*d); // Passing the deque by reference
    delete d; // Don't forget to deallocate memory
    return 0;
}