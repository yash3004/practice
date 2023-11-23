#include<stdio.h>
#include<stdlib.h>
//ls for all operations 
void create();
void display();
void insert_beg();
void insert_end();
void insert_pos();
void delet_begin();
void delet_end();
void delet_pos();

//creating the linklist and performing all the operations
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
int main()
{
	int choice;
	while(1)
	{
		printf("1-create\n");
		printf("2-display\n");
		printf("3-beg insert\n");
		printf("4-last_insert\n");
		printf("5-insert_pos\n6-beg_delete\n7-last_del\n8-pos_del9-exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create();
				break;

			case 2:
				display();
				break;

			case 3:
				insert_beg();
				break;

			case 4:
				insert_end();
				break;

			case 5:
				insert_pos();
				break;

			case 6:
				delet_begin();
				break;

			case 7:
				delet_end();
				break;

			case 8:
				delet_pos();
				break;

			case 9:
				exit(0);
				break;

			default:
				printf("enter the valid choice");
				break;
		}

	}
	return 0;
}
void create()
{
	struct node *temp, *ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("\n out of memory space\n");
		exit(0);

	}
	printf("\n enter the elements\n");
	scanf("%d" , &temp->data);
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("the list is empty\n");
		return;
	}
	else
	{
		ptr = head;
		printf("\n the list of elements are	: \n");
		while(ptr != NULL)
		{
			printf("%d \t" , ptr->data);
			ptr=ptr->next;
		}
	}  
}
void insert_beg()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("OVERFLOW\n");
		return;
	}
	printf("enter the data u want to insert\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		temp->next=head;
		head = temp;
	}
}
void insert_end()
{
	struct node *temp , *ptr;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("out of memoryspace\n");
		return;

	}
	printf("enter the element \n");
	scanf("%d" , &temp->data);
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}

}
void insert_pos()
{
	struct node *ptr,*temp;
	int i,pos;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Out of Memory\n");
		return;
	}
	printf("\n enter the pos at which you want to insert\n");
	scanf("%d" , &pos);
	printf("enter the element you want to insert\n");
	scanf("%d" , &temp->data);
	temp->next=NULL;
	if(pos == 0)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		for(i=0,ptr=head;i<pos-1;i++)
		{
			ptr=ptr->next;
			if(ptr==NULL)
				{printf("\npos not found");
				return;}
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
}
void delet_begin()
{
	struct node *ptr;
	if(ptr==NULL)
	{
		printf("the list is empty \n");
		return;
	}
	else
	{
		ptr = head;
		head=head->next;
		printf("the deleted element is : %d" , ptr->data);
		free(ptr);
	}
}
void delet_end()
{
	struct node *temp , *ptr;
	if(head==NULL)
	{
		printf("the list is empty\n");
		return;
	}
	else if(head->next==NULL)
	{
		
		ptr = head;
		head = NULL;
		printf("the deleted element is %d" , ptr->data);
		free(ptr);
	}
	else 	{
			ptr = head;
	
		while(ptr->next != NULL)
		{
			temp = ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		printf("\nthe deleted elemet is %d" , ptr->data);
		free(ptr);
	}
}
void delet_pos()
{
	int i,pos;
	struct node *ptr,*temp;
	if(head==NULL)
	{
		printf("the list is empty\n");
		exit(0);
	}
	else
	{
		printf("enter the pos you want to insert\n");
		scanf("%d" , &pos);
		if(pos==0)
		{
			ptr=head;
			head=head->next;
			printf("the deleted element is : %d" , ptr->data);
			free(ptr);
		}
		else
		{
			ptr = head;
			for(i=0;i<pos;i++)
			{
				temp=ptr;
				ptr=ptr->next;
				if(ptr==NULL)
				{
					printf("pos not found\n");
					return;
				}
				temp->next = ptr->next;
				printf("\n the deleted elment is : %d" , ptr->data);
				free(ptr);
			}
		}
	}
}

