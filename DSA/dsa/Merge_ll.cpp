//using linked list to merge sorted arrays 

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
 class Solution{
    public:
    
    ListNode *merge_list(ListNode *l1 , ListNode *l2){

        ListNode *dummy = new ListNode(-1);
        ListNode *current = dummy;
        while(l1!=nullptr && l2 != nullptr){
            if(l1->data < l2->data){
                current->next = l1;
                l1 = l1->next;
            }
            else{
                current->next = l2;
                l2 = l2->next;
            }
            //traversing the list 
            current = current->next;
        }
        if(l1 != nullptr){
            current->next = l1;
        }
        else{
            current->next = l2;
        }
        return dummy->next;


    }
    ListNode *div(ListNode *head){
        ListNode *current = head;
        ListNode *slow = current;
        ListNode *fast = current->next;
        while(fast!=nullptr && fast->next != nullptr){

            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = nullptr;
        return mid;
    }
    void print_ll(ListNode *head){
        while(head!=nullptr){
            cout<<head->data<<"-->";
            head = head->next;
        }
        cout<<endl;
    }
 };
 int main(){
    Solution s1;//created an instance of the class
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);
    s1.print_ll(l1);
    s1.print_ll(l2);
    ListNode* merge = s1.merge_list(l1 , l2);
    ListNode *mid = s1.div(merge);
    
    s1.print_ll(merge);
    



 }