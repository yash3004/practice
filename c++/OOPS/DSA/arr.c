//implementing the array
#include<stdio.h>
#include<stdlib.h>	
int main()	
{
	
	int n;
	
	//creating the array
	printf("enter the array size\n");
	scanf("%d" , &n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the element %d" , i);
		scanf("%d"  , &array[i]);
	}
	//for viewing the array 
	printf("the array is : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d" , array[i]);
	}
	return 0;

}