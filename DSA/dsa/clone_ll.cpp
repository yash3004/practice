#include<bits/stdc++.h>
using namespace std;
//coding the cloneing of the 
class Node{
    public:
    int data;
    Node *next;
    Node *random;
    Node(int data){
        this ->data = data;
        this ->next = nullptr;
        this ->random = nullptr;
        

    }
};
class Solution{
    public:
Node *clone_list(Node *head){
    unordered_map <Node*,Node*> mymap;
    Node *curr = head;
    while(curr){
        mymap[curr] = new Node(curr->data);
        curr = curr->next;
    }
    
    curr = head;
    while(curr){
        mymap[curr]->next = mymap[curr->next];
        mymap[curr]->random =mymap[curr->random];
        curr = curr->next;
    }
    return mymap[curr];

}
void print_ll(Node *head){
    while(head){
        if(head->random){
            cout<<"random ->" <<head->random->data;
        }
        else{
            cout<<"next->"<<head->data;
        }
        
        head = head->next;
    }

    cout<<endl;
}
};
int main(){
    Solution s1;
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Setting random pointers for illustration purposes
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next;
    s1.print_ll(head);
    Node *clone = s1.clone_list(head);
    s1.print_ll(clone);

}