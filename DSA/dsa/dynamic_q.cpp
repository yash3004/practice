//creating dynamic 
#include<bits/stdc++.h>
using namespace std;

struct petrol_pump{
    int petrol;
    int distance;
};

class Queue{
    public:
    int f;
    int rear;
    petrol_pump *arr;
    int size;
    int cap;
    //constructor
    Queue(int n){
        this-> f = -1;
        this-> rear = f;
        this ->cap = n;
        arr = new petrol_pump[cap];
        this-> size = 0;

    }
    
    bool isfull(){
       return (cap==size);

    }
    bool isempty(){
        return (size == 0);
    }
    void resize() {
    int oldCap = cap;
    cap = cap * 2;
    petrol_pump *newArr = new petrol_pump[cap];

    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[(f + i) % oldCap]; // Copy elements from the existing queue
    }
    
    delete[] arr; // Deallocate the old memory
    arr = newArr; // Point to the new array

    f = 0; // Reset front to the start of the new array
    rear = size - 1; // Rear is at the last valid element in the resized array
}

    bool push(const petrol_pump &data){
        if(isfull()){
            resize();
        }
        rear = (rear+1) % cap;
        arr[rear] = data;
        if(f==-1){
            f = rear;
        }
        size++;
        return true;

    }
     petrol_pump pop() {
        if (isempty()) {
            cout << "Queue is empty. Cannot pop." << endl;
            return { -1, -1 }; // Return an "empty" PetrolPump struct
        }
        petrol_pump ans = arr[f];

        if (f == rear) {
            f = rear = -1;
            size = 0;
        } else {
            f = (f + 1) % cap;
            size--;
        }
        return ans;
    }
};

void print_queue(const Queue &q){
    Queue temp = q;
    while(!temp.isempty()){
        petrol_pump data = temp.pop();
        cout<<data.distance<<"-d , "<<data.petrol<<"-p";
    }
    
    cout<<endl;
}
int tour_cir(petrol_pump pump[], int n) {
    Queue q(n); // Create a queue with capacity n
    int count = 0, i = 0, start = 0, total = 0;

    while (start < n) {
        while (total < n) {
            total += pump[i].petrol - pump[i].distance;
            q.push(pump[i]);
            if (total < 0) {
                count += q.size;
                total = 0;
                start = i + 1;
                q = Queue(n); // Reset the queue
            }
            i = (i + 1) % n;
        }
    }
    return (count + q.size >= n) ? start : -1;
}
int main() {
    petrol_pump pump[] = { {1, 10}, {2, 20}, {3, 30}, {4, 40}, {5, 50} };
    int n = sizeof(pump) / sizeof(pump[0]);

    int start = tour_cir(pump, n);
    if (start == -1)
        cout << "No solution exists." << endl;
    else
        cout << "Start at petrol pump: " << start << endl;

    return 0;
}