#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int d){
        data = d;
        this->next=nullptr;
    }
};
class Solution{
    public:
    node *remove_duplicate(node *head){
        int i=head->data;
        node *current = head;
        node *prev = nullptr;
        node *temp = nullptr;
        while(current!=nullptr){
            if (current->data != i) {
        temp = current;
        // if (prev == nullptr) {
        //     // If the node to delete is the head
        //     head = current->next;
        //     delete temp;
        //     current = head;
        // } else {
            prev->next = current->next;
            delete temp;
            current = prev->next;
        // }
        // Don't increment i here since you're deleting nodes based on their data value
    } else {
        // Move to the next node if the value matches
        prev = current;
        current = current->next;
        i++;
    }
        }
        return head;
    }
     void print_ll(node *head){
        while(head!=nullptr){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<endl;
    }
};
int main(){
    Solution s1;
    node *head = new node(4);
    head->next = new node(5);
    head->next->next = new node(5);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(6);
    
    s1.print_ll(head);
    node *ans = s1.remove_duplicate(head);
    s1.print_ll(ans);

}