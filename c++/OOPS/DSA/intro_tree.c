//implementing the tree 
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int item;
	struct node *left;
	struct node *right;
};

//inordered traversal 
void inorderTraversal(struct node *root)
{
	if(root==NULL)
		return;
	inorderTraversal(root->left);
	printf("%d ->" , root ->item);
	inorderTraversal(root->right);
}

//preordered traversal
void preorderedTraversal(struct node *root)
{
	if(root==NULL)
		return;
	printf("%d ->", root->item);
	preorderedTraversal(root->left);
	preorderedTraversal(root->right);

}

//postorderd traversal
void postorderTraversal(struct node *root)
{
	if(root==NULL)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d ->" ,root->item);	 	 	
}
//creatinig the node
struct node *createNode(value)
{
	struct node *newNode = malloc(sizeof(struct node));
	newNode->item = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

//insert no the left 
struct node *insertLeft(struct node *root , int value)
{
	root->left = createNode(value);
	return root->left;
}
//insert the node on the right 
struct node *insertRight(struct node *root , int value)
{
	root->right = createNode(value);
	return root->right;
}

int main()
{
	struct node *root = createNode(1);
	insertLeft(root , 2);
	insertRight(root , 3);
	insertLeft(root->left,4);

	printf("\n Inorder traversal \n");
	inorderTraversal(root);

	printf("\n preorderedTraversal\n");
	preorderedTraversal(root);

	printf("postorder Traversal\n ");
	postorderTraversal(root);

}