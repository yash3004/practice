import java.util.*;
public class BST{
	static class Node{
		int data;
		Node right;
		Node left;

		Node(int data){
			this.data = data;
		}

	}
	//making a constructor for the insertion val 


	public static Node insert(Node root , int val){
		//checking the tree is empty
		if(root == null)
		{
			root = new Node(val);
			return root;
		}

		//if the value is less then the node 
		if(root.data > val)
		{
			root.left = insert(root.left,val);
		}

		else if(root.data < val){
			root.right = insert(root.right, val);
		}

		return root;
	}

	public static boolean search(Node root , int k){
		if(root == null){
			return false;
		}
		else if(root.data > k){
			return search(root.left , k);
		}
		else if(root.data == k){
			return true;
		}
		else{
			return search(root.right , k);
		}

	}

	public static Node delete(Node root , int val){
		if(root.data > val){
			root.left = delete(root.left , val);
		}
		else if(root.data < val){
			root.right = delete(root.right , val);
		}
		else //for root.data == val
			{
			//case1
			if(root.left == null && root.right == null){
				return null;
			}
			//case 2
			else if(root.left == null){
				return root.right;
			}
			else if(root.right == null){
				return root.left;
			}
			//case3
			Node IS = inordersuccessor(root.right);
			root.data = IS.data;
			root.right = delete(root.right , IS.data);
		}
		return root;
	}
	public static Node inordersuccessor(Node root){
		while(root.left != null){
			root = root.left;	}
		return root;

	}
	public static void printinrange(Node root , int x , int y){
		if(root == null){
			return;
		}
		else if(root.data >=x && root.data <=y){
			printinrange(root.left , x , y);
			System.out.print(root.data + " ");
			printinrange(root.right , x, y);
		}
		else if(root.data > x){
			printinrange(root.left , x , y);
		}
		else if(root.data < y){
			printinrange(root.right , x ,y);
		}
	}
	public static void printpath(ArrayList<Integer>path){
		for(int i = 0;i<path.size();i++)
		{
			System.out.print(path.get(i) + "-->");
		}
		System.out.print("\n");
	}
	public static void printroot2leaf(Node root , ArrayList<Integer> path){
		//if root == null
		if(root == null){
			return ;
		}
		path.add(root.data);
		if(root.left == null && root.right == null){
			printpath(path);
		}
		else {
			//non leaf nodes 
			printroot2leaf(root.left , path);
			printroot2leaf(root.right , path);

		}
		path.remove(path.size()-1);
	}

	//init an inorder trasversal 
	public static void inorder(Node root){
		//it is also in a recursive way 

		//agar root null tho smimply return krde 

		if(root == null){
			return;
		}
		inorder(root.left);
		System.out.print(root.data + " ");
		inorder(root.right);
	}
	
	
	
	
	
	


	public static void main(String args[]){
		int val[] = {5,3,1,2,4,7};
		Node root = null;
		for(int i=0;i<val.length;i++)
		{
			root = insert(root , val[i]);
		}
		//applying the inorder traversal 
		inorder(root);
		//applying search 
		System.out.print("/n");
		

		printroot2leaf(root , new ArrayList<>());


	}
}

