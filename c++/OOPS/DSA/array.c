//simple program for insertion and deletion in a array 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the no of elements you want to insert\n");
	scanf("%d" , &n);
	int arr[n] ;	 
	
	for(int i=0;i<n;i++)
	{
		printf("enter element %d" , i);
		scanf("%d" , &arr[i]);
	}
	//displaying the data
	printf("the array formed is : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d \t" , arr[i]);
	}
	return 0;
}