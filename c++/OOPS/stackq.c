//program to implement the stack and queue with the link list 
#include<stdio.h>
#include<stdlib.h>
//init the node
struct node
{
	int data;
	struct node *next;
};
struct node *next;
//init the operation 
void stack();
void queue();
void push();
void pop();
void enque();
void deque();
void dis1();
void dis2();
//init the main

int main()
{
	int choice;
	while(1)
	{
		printf("press 1 for stack\n press 2 for queue\n");
		scanf("%d" , &choice)
		switch(choice)
		{
			case 1:
				stack();
				break;

			case 2:
				queue();
				break;
		}
	}

}
void stack()
{
	int choice;
	while(1)
	{
		printf("p-1 for push\n p-2 for pop\n p-3 for display\np-4 for exit\n");
		scanf("%d" , &choice);
		switch(choice)
		{
			case 1 :
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				dis1();
				break;
			case 4:
				exit(0);
				break;	

		}
	}
}
