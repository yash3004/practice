import java.util.*;

class Node {
    Node prev;
    int data;
    Node next;

    Node(int data) {
        this.prev = null;
        this.data = data;
        this.next = null;
    }
}

class DoubleLL {
    public Node insert(int data, Node head) {
        Node newNode = new Node(data);
        newNode.next = head;

        if (head != null) {
            head.prev = newNode;
        }

        return newNode;
    }

    public void printLL(Node head) {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " --> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public Node reverseLL(Node head) {
        Node current = head;
        Node temp = null;

        while (current != null) {
            temp = current.prev;
            current.prev = current.next;
            current.next = temp;
            current = current.prev;
        }

        if (temp != null) {
            head = temp.prev; // Update the head
        }

        return head;
    }
}

public class LLPractice {
    public static void main(String args[]) {
        DoubleLL list = new DoubleLL();
        Node head = new Node(5);
        head = list.insert(4, head);
        head = list.insert(3, head);
        head = list.insert(2, head);

        System.out.println("Original Linked List:");
        list.printLL(head);

        System.out.println("\nReversed Linked List:");
        head = list.reverseLL(head);
        list.printLL(head);
    }
}
