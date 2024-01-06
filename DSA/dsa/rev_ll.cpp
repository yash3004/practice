//ll 
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
    node* reversell(node *head){
        node *current = head;
        node *prev = nullptr;
        while(current!=nullptr){
            node *next = current->next;
            current->next = prev;
            prev = current;
            current=next;
        }
        return prev;
    }
    void print_ll(node *head){
        while(head!=nullptr){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<endl;
    }
    node* add(node *l1 , node *l2){
        node * ans = new node(-1);
        node *dummy = ans;
        node* revl1 = reversell(l1);
        node* revl2 = reversell(l2);
        int carry = 0;
        while(revl1!=nullptr && revl2!=nullptr  ){
            int sum=carry;
            sum+=revl1->data;
            sum+=revl2->data;
            
            dummy->next = new node(sum%10);
            
            revl1 = revl1->next;
            revl2 = revl2->next;
            carry = sum/10;
            dummy = dummy->next;
        }
        dummy->next = new node(carry);
        
      
        return reversell(ans->next);

    }


};
int main(){
    Solution s1;
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    node *head2 = new node(9);
    head2->next = new node(9);
    head2->next->next = new node(9);
    head2->next->next->next = new node(9);
    head2->next->next->next->next = new node(9);
    // s1.print_ll(head);
    // node *rev = s1.reversell(head);
    // s1.print_ll(rev);
    s1.print_ll(head);
    s1.print_ll(head2);
    node *add = s1.add(head,head2);
    s1.print_ll(add);
    return 0;


}
