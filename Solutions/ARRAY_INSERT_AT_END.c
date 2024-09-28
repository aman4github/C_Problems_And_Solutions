#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, j;
	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter the value to insert end position : ");
	scanf("%d",&j);
	arr[n] = j;
	printf("New array is : \n");
	for(i = 0; i <= n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
