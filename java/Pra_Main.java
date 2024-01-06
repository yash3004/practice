//code for linked list
class Node{
    int data;
    Node next;
    public Node(int data){
        this.data = data;
        this.next = null;
    }
}

class LinkedList{
    private Node head;

    //init the constructor 
    public LinkedList(){
    this.head=null;
    }

    public void insert_data(int data){
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }
    public void insert_at_end(int data){
        //create a temp node
        Node tempNode = new Node(data);
        if(head == null){
            head = tempNode;
            return;    
        }
        Node CurrentNode = head;
        while(CurrentNode.next != null){
            CurrentNode = CurrentNode.next;

        }
        CurrentNode.next = tempNode;
    }
    public void insert_at(int data , int place){
        Node tempNode = new Node(data);
        Node current = head;
        if(place<= 1){
            tempNode.next = head;
            head = tempNode;
            return;
        }
        int cur_pos = 1;

    while (cur_pos < place - 1 && current != null) {
        current = current.next;
        cur_pos++;
    }
    
    if (current == null) {
        System.out.println("Invalid position. Insertion at the end.");
        return;
    }

    tempNode.next = current.next;
    current.next = tempNode;
}
    public void print_ln(){
        Node Current = head;
        while(Current != null){
            System.out.print(Current.data + " ");
            Current = Current.next;
        }
        System.out.println();
    }


    public void delete_at_first(){
        if(head == null){
            return;
        }
        head = head.next;
    }
    public void delete_at(int place){
        if(head == null){
            return;
        }
        if(place <= 1){
            head = head.next;
        }
        //for the place more than 1 
        int cur_pos=1;
        Node Current = head;
        while(cur_pos < place -1 && head != null){
            Current = Current.next;
            cur_pos++;
        }
        if(Current == null){
            System.out.println("invalid pos !!");
        }
        //if not then like this

        Current.next = Current.next.next;

    }
 public void reverse_ll() {
    // If list is empty or has only one element
    if (head == null || head.next == null) {
        return;
    }

    Node prev = head;
    Node current = head.next;
    while (current != null) {
        Node next = current.next;
        current.next = prev;
        prev = current;
        current = next;
    }

    head.next = null; // Set the original head's next to null
    head = prev; // Update the head to the last node (new first node after reversal)
}


}


class Pra_Main
{
    public static void main(String args[]){
        LinkedList l1= new LinkedList();
        l1.insert_data(1);
        l1.insert_data(2);
        l1.insert_data(3);
        l1.insert_data(4);
        l1.insert_data(5);
        l1.insert_at_end(1);
        l1.insert_at(5,3);

        l1.delete_at_first();
        l1.delete_at(3);
       l1.print_ln();
       l1.reverse_ll();
       l1.print_ln();

    }
}