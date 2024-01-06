//code for linked list
import java.util.*;
//how to reverse a linkdelist
class Node{
    Node prev;
    int data;
    Node next;
    //constructor init
    Node(int data){
        this.prev=null;
        this.data = data;
        this.next = null;
    }
}

class DoubleLL{
    public void insert(int data , Node head){
        Node tempNode = new Node(data);
        tempNode.prev=null;
        tempNode.next = head;
        head = tempNode;
    }

    public void print_ll(Node head){
        Node current= head;
        while(current!=null){
            System.out.print(current.data + "-->");
            current = current.next;

        }
        System.out.print_ln();
    }
}
public class LL_pra{
    public static void main(String args[])
    {
        DoubleLL l1 =  new DoubleLL();
        Node head = new Node(4);
        l1.insert(4 ,  head);
        l1.insert(4, head);
        l1.print_ll(head);

    }
}