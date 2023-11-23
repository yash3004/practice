//implementing the b-tree
#include<stdio.h>
#include<stdlib.h>

//node for tree
struct node
{
	int data;
	struct node *left;
	struct node *right;
};


//inorder traversal
void inorderTraversal(struct node *root)
{
	if(root == NULL)
		return;
	
	inorderTraversal(root->left);
	printf("%d -->" , root->data);
	inorderTraversal(root->right);

}

void preorderTraversal(struct node *root)
{
	if(root == NULL)
		return;
	printf("%d -->" , root->data);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

//post order traversal 
void postorderTraversal(struct node *root)
{
	if(root == NULL)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d -->" , root->data);
}
//creating a new node
struct node *createnode(int value)
{
	struct node *newnode = malloc(sizeof(struct node));
	newnode->data = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

//insert node at left
struct node *insertleft(struct node *root , int value)
{
	root->left = createnode(value);
	return root->left;
	

}

//insert node at right 
struct node *insertright(struct node *root, int value)
{
	root->right = createnode(value);
	return root->right;
	
}
int main()
{
	int item;
	int item1;
	int item2;
	printf("enter the root node \n");
	scanf("%d" , &item);
	struct node *root = createnode(item);
	printf("enter the choice\n");
	int choice;
	scanf("%d" , &choice);
	while(choice != 0)
	{
		switch(choice)
		{
			case 1:
			
			printf("insert at left \n");
			scanf("%d" , &item);
			insertleft(root,item1);
			break;

			case 2:
			
			printf("enter the root node \n");
			scanf("%d" , &item2);
			insertright(root,item2);

			case 3:
			exit(0);
			break;
				

		}

	}
	printf("\n Inorder traversal \n");
	inorderTraversal(root);

	printf("\n preorderedTraversal\n");
	preorderTraversal(root);

	printf("postorder Traversal\n ");
	postorderTraversal(root);
	

}