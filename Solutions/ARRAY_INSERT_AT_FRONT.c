#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, j;
	printf("Enter the limit of array : ");
	scanf("%d",&n);
	printf("Enter the values of array : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter the item : ");
	scanf("%d",&j);
	n = n + 1;
	for(i = n; i > 0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = j;
	printf("New Array : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
