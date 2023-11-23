//implementation of linklist
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insert();
void ins2();
void display();

int main()
{
	int choice;
	while(choice != 5)
		printf("1-insert\n2-insert2\n3-displat\n4-exit\n");
		scanf("%d" ,&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;

			case 2:
				ins2();
				break;

			case 3:
				display();
				break;

			case 4:
				exit(0);
				break;

			default:
				printf("plz enter valid input\n");
				break;

		}
		return 0;

}
void insert()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("data_overflow\n");
		return;
	}
	printf("enter the data for the list");
	scanf("%d" , &temp->data);
	//case1 list is empty 
	if(head==NULL)
	{
		temp->next = NULL;
		head = temp;
	}
	else
	{
		temp->next=head;
		head = temp;
	}
}
void ins2()
{
	struct node *temp , *temp1;
	temp = head;
	temp1 = (struct node *)malloc(sizeof(struct node));
	printf("enter the data inserted in the end\n");
	scanf("%d" , &temp1->data);
	temp1->next = NULL;
	//case1 list is  empty 
	if(head ==NULL)
	{
		head = temp1;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
			temp->next=temp1;
		}
	}
}
void display()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	else
	{
		ptr=head;
		printf("the array elements are : ");
		while(ptr != NULL)
		{
			printf("%d\t" , &ptr->data);
			ptr = ptr->next;
		}
	}
}