import java.util.*;
public class BinaryTree{
	static class Node {
		int data;
		Node left;
		Node right;
		Node(int data){
			this.data = data;
			this.right = null;
			this.left = null;
		}



	
	}
	static class BT{
		static int idx = -1;
		public static Node buildTree(int nodes[]){
			idx++;
			if(nodes[idx] == -1){
				return null;
			}
			//init the root node
			Node root = new Node(nodes[idx]);
			root.left = buildTree(nodes);
			root.right = buildTree(nodes);

			return root;

		}
	}

	public static void inorder(Node root){
		if(root == null){
			return;
		}
		inorder(root.left);
		System.out.print(" "+root.data+ " ");
		inorder(root.right);
	
	}
	public static void preorder(Node root){
		if(root == null){
			return;
		}
		System.out.print(root.data + " ");
		preorder(root.left);
		preorder(root.right);
	}

	public static void levelorder(Node root){
		if(root == null){
			return;
		}
		Queue<Node> q = new LinkedList<>();
		q.add(root);
		q.add(null);
		while(!q.isEmpty()){
			Node curnode = q.remove();
			if(curnode==null){
				System.out.println();
				if(q.isEmpty()){
					break;
				}
				else{
					q.add(null);
				}
			}
			else{
				System.out.print(curnode.data + " ");
				if(curnode.left != null){
					q.add(curnode.left);
				}
				if(curnode.right != null){
					q.add(curnode.right);
				}

			}
		}
	}
	public static int count(Node root){
		if(root == null){
			 return 0;
		}
		int left_node = count(root.left);
		int right_node = count(root.right);
		return (left_node+right_node+root.data);
	}
	public static int height(Node root){
		if(root == null){
			return 0;
		}
		int left_node = height(root.left);
		int right_node = height(root.right);
		return (Math.max(left_node , right_node)+1);
	}
	//for calculation of the diameter 
	//time complexity O(n^2)
	public static int diam(Node root){
		if(root == null){
			return 0;
		}
		int diam1 = diam(root.left);
		int diam2 = diam(root.right);
		int diam3 = height(root.left) + height(root.right) + 1;
		return Math.max(diam3 , Math.max(diam2 , diam1));
	}
	static class treeinfo{
		int ht;
		int diam;
		treeinfo(int ht , int diam){
			this.ht = ht;
			this.diam = diam;
		}

	}
	public static treeinfo diameter(Node root){
		if(root == null){
			return new treeinfo(0,0);
		}

		treeinfo left = diameter(root.left);
		treeinfo right = diameter(root.right);
		int myheight = Math.max(left.ht , right.ht)+1;

		int diam1 = left.diam;
		int diam2 = right.diam;
		int diam3 = left.ht + right.ht + 1;

		int mydiam = Math.max(diam3 , Math.max(diam2 , diam1));

		treeinfo myinfo = new treeinfo(myheight , mydiam);
		return myinfo;
	}
	public static boolean isidentical(Node root , Node subroot){
		if(subroot == null && root == null){
			return true;
		}
		if(subroot == null || root == null){
			return false;
		}
		if(root.data == subroot.data){
			return isidentical(root.left , subroot.left) && isidentical(root.right ,  subroot.right);
		}
		return false;
	}

	public static boolean issubtee(Node root , Node subroot){
		if(subroot == null){
			return true;
		}
		if(root == null){
			return false;
		}
		if(root.data == subroot.data){
			if(isidentical(root , subroot)){
				return true;
			}

		}
		return issubtee(root.left , subroot)||issubtee(root.right , subroot);

	}


	public static void main(String args[]){
		int node[] = {1,3,-1,-1,4,5,-1,-1,6,-1,-1};
		
		BT tree = new BT();
		Node root = tree.buildTree(node);
		System.out.print(root.data);
		inorder(root);
		System.out.println();
		preorder(root);
		System.out.println();
		levelorder(root);
		System.out.println();
		int c = count(root);
		System.out.print(c + "\n");
		int h = height(root);
		System.out.print(h+ "\n");
		int d = diam(root);
		System.out.print(d + " \n");
		// Node root2 = tree.buildTree(node2);

		// System.out.print(diameter(root).diam);
		// if(issubtee(root , root2)){
		// 	System.out.print("yes");
		// }


	}
}