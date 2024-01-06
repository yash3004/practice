//code for cicular linked list 
class Node{
    int data;
    Node next;
    //init constructor
    public Node(int data){
        this.data = data;
        this.next = null;
    }
}
//the cirlinked list 
class CirLinked{
   Node insert_at(int data, int place, Node head) {
        Node tempNode = new Node(data);
        
        if (head == null) {
            head = tempNode;
            head.next = head; // Point to itself to form a circular link
            return head;
        } else {
            Node curNode = head;
            int current = 1;
            
            while (current < place - 1 && curNode.next != head) {
                curNode = curNode.next;
                current++;
            }
            
            Node nextNode = curNode.next;
            curNode.next = tempNode;
            tempNode.next = nextNode;
            return head;
        }
    }
  public void print_ll(Node head) {
    if (head == null) {
        System.out.println("Circular Linked List is empty.");
        return;
    }

    Node curNode = head;
    do {
        System.out.print(curNode.data + " --> ");
        curNode = curNode.next;
    } while (curNode != null && curNode != head);

    if (curNode == head) {
        System.out.println(head.data + " (back to head)");
    } else {
        System.out.println(" (Incomplete circular list)");
    }
}




}
public class LLPra{
    public static void main(String [] args){
        CirLinked c1 = new CirLinked();
        Node head = new Node(1);
        head = c1.insert_at(1,1 , head);
        head = c1.insert_at(2,1 , head);
        head = c1.insert_at(3,1 , head);
        head = c1.insert_at(4,1 , head);
        head = c1.insert_at(5,1 , head);
        head = c1.insert_at(2,3 , head);
        c1.print_ll(head);

    }
}