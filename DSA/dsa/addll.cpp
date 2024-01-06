#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node *rev_ll(Node *l1){
    Node *current = l1;
    Node *prev1 = nullptr;

    while(current!=nullptr){
        Node *next = current->next;
        current->next = prev1;
        prev1 = current;
        current = next;
    }
    return prev1;
}


Node* addLinkedLists(Node* l1, Node* l2) {
    Node* dummy = new Node(0);
    Node* current = dummy;
    int carry = 0;
    //rev the ll 
    l1 = rev_ll(l1);
    l2 = rev_ll(l2);
  

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;
        if (l1 != nullptr) {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        current->next = new Node(sum % 10);
        current = current->next;
    }

    return rev_ll(dummy->next);
}

// Function to display the linked list
void displayLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << "->";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* l1 = new Node(1);
    l1->next = new Node(2);
    l1->next->next = new Node(7);
    l1->next->next->next = new Node(9);
    l1->next->next->next->next = new Node(9);

    Node* l2 = new Node(5);
    l2->next = new Node(1);
    l2->next->next = new Node(9);
    l2->next->next->next = new Node(9);
    l2->next->next->next->next = new Node(9);

    cout << "Linked List 1: ";
    displayLinkedList(l1);
    cout << "Linked List 2: ";
    displayLinkedList(l2);

    Node* result = addLinkedLists(l1, l2);

    cout << "Resultant Linked List: ";
    displayLinkedList(result);

    return 0;
}
