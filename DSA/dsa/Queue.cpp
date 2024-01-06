#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int f;
    int rear;
    int *arr;
    int size;
    int cap;
    //constructor
    public:
    Queue(int n){
        this-> f = -1;
        this-> rear = f;
        this ->cap = n;
        arr = new int[cap];
        this-> size = 0;

    }
    
    bool isfull(){
       return (cap==size);

    }
    bool isempty(){
        return (size == 0);
    }
    bool push(int data){
        if(isfull()){
            return false;
        }
        rear = (rear+1) % cap;
        arr[rear] = data;
        if(f==-1){
            f = rear;
        }
        size++;
        return true;

    }
    int pop(){
        if(isempty()){
            return -1;
        }
        int ans = arr[f];
        delete arr[f];
        if(f == rear){
            f=rear=-1;
            size = 0;
        }
        else{
            f = (f+1) % cap;
            size--;
            
        }
        return ans;
    }

};
void print_queue(Queue q){
    while(!q.isempty()){
        cout<<q.pop()<<" ";
    }
    cout<<q.pop();
    cout<<endl;
}
int main(){
    Queue *q1 = new Queue(9);
   q1->push(1);
    q1->push(2);
    q1->push(3);
    q1->push(4);
    q1->push(5);
    q1->push(6);
    q1->push(7);
    q1->push(8);
    q1->push(9);
    q1->pop();
    q1->pop();
    q1->push(10);
    print_queue(*q1);
}