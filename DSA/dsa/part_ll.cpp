//code doe partition list
#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode *next;
    ListNode(int data){
        this->data = data;
        this->next = nullptr;
    }
 };

class Sol{
    public:
    ListNode *part_list(ListNode *head,int x){
        ListNode *lesser_head = new ListNode(0);
        ListNode *greater_head = new ListNode(0);
        ListNode *lesser = lesser_head;
        ListNode *greater = greater_head;
        while(head!=nullptr){
            ListNode *next = head->next;
            if(head->data < x){
                lesser->next = head;
                lesser = head;
            }
            else{
                greater->next = head;
                greater = head;
            }
            head = next;

        }
        greater->next = nullptr;
        lesser->next = greater_head->next;
        delete greater_head;
        return lesser_head->next;

        
    }
    void printll(ListNode *head){
        while(head!=nullptr){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<endl;

    }
    
};
int main(){
    Sol s1;
    ListNode  *head = new ListNode(3);
    head->next = new ListNode(5);
    head->next->next = new ListNode(8);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(10);
    head->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next = new ListNode(1);

    s1.printll(head);
    ListNode *partll = s1.part_list(head,5);
    s1.printll(partll);
    return 0;


}