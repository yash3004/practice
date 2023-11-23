#include<stdio.h>
void swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void printarr(int arr[] , int n)
{
for(int i = 0; i < n; ++i)
{
	/* code */
	printf("%d " , arr[i]);
}
}
int main()
{
	int arr[] = {2,1,6,5,3,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	printf("Array before sort : \n");
	printarr(arr , n);

	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<n-i;j++)
		{
		if(arr[j]>arr[j+1])
		{
			swap(&arr[j] , &arr[j+1]);
			
		}
	}

	}
	printf("Array after sort : \n");
	printarr(arr , n);

}