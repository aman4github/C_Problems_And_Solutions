#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, item, loc;
	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the item : ");
	scanf("%d",&item);
	printf("Enter the position : ");
	scanf("%d",&loc);
	n = n + 1;
	if(loc <= n)
	{
		for(i = n; i > loc; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[loc] = item;
		printf("New array : \n");
		for(i = 0; i < n; i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	else
		printf("Enter a valid position.");
	return 0;
}
