#include <iostream>
using namespace std;

struct petrol_pump {
    int petrol;
    int distance;
};

class Queue {
public:
    int f;
    int rear;
    petrol_pump* arr;
    int size;
    int cap;


    Queue(int n) : f(-1), rear(f), cap(n), size(0) {
        arr = new petrol_pump[cap];
    }

    // Other functions (isfull, isempty, resize, push, pop) remain the same

    // Destructor to release memory
    ~Queue() {
        delete[] arr;
    }
};

void print_queue(const Queue &q) {
    Queue temp = q;
    while (!temp.isempty()) {
        petrol_pump data = temp.pop();
        cout << "Petrol: " << data.petrol << ", Distance: " << data.distance << endl;
    }
    cout << endl;
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
