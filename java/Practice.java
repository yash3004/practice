import java.util.*;
class Struct{
    static class Node{
        int val;
        Node right;
        Node left;
        Node(int data){
        this.val = data;
        this.right = null;
        this.left = null;


        }


    }
    static class BT{
        static int idx = -1;
        public static Node buildTree(int nodes[]){
            idx ++;
            if(nodes[idx]== -1){
                return null;
            }
            //uinit the root node 
            Node root= new Node(nodes[idx]);
            root.left = buildTree(nodes);
            root.right = buildTree(nodes);

            return root;
        }

    }
    //traversals 
    public static void inorder(Node root){
        if(root == null){
            return;
        }
        inorder(root.left);
        System.out.println(root.val + "-->");
        inorder(root.right);
    }
    public static int height(Node root){
        if(root == null){
            return 0;
        }
        int left_height = height(root.left);
        int right_height = height(root.right);
        return Math.max(left_height , right_height) + 1;
        
    }

    public static int count(Node root){
        if(root==null){
            return 0;
        }
        int left_count = count(root.left);
        int right_count = count(root.right);
        return left_count+right_count+root.val;
    }
}
class Recursion{
   public  int fact(int n){
        if(n<=1){
            return 1;
        
        }
        return n*(fact(n-1));
        
    }
}
public class Practice{
    public static void main(String args[]){
        int node[] = {1,3,-1,-1,4,5,-1,-1,6,-1,-1};
        Recursion r1 = new Recursion();
        Struct s1 = new Struct();
        Struct.BT tree = new Struct.BT();
        Struct.Node root= tree.buildTree(node);
        s1.inorder(root);
        int count = s1.count(root);
        int height = s1.height(root);
        System.out.println("inorder-->");
        System.out.println("Count" + count);
        System.out.println("height" + height);
        int a = r1.fact(5);
        System.out.println(a);  

    }
}