#include<stdio.h>
int binarysort(int arr[] ,  int l , int r , int val)
{
	int mid;
	if(r>=l)
	{
		int mid = (l+r)/2;
		if(arr[mid] == val)
	{
		return mid+1;
	}
	else if(arr[mid] > mid)
	{
		binarysort(arr , mid+1 , r , val);
	}
	else
	{
		binarysort(arr ,l, mid-1 , val);
	}
	}
	
	return -1;
}
int main()
{	
	int res;
	int val;
	int arr[] = {2,4,5,6,7,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("enter the value to be searched :\n ");
	scanf("%d" ,&val );
	printf("the array is : \n");
	for(int i = 0;i<n;i++)
	{
		printf("%d" , arr[i]);
	}
	res = binarysort(arr , 0 , n-1, val);
	if(res == -1)
	{
		printf("the element is not found \n");
	}
	else
	{
		printf("the result is found at %d \n" , res);
	}



}