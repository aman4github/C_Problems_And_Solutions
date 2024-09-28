#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, j, flag=1;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter the item which you want to find out : ");
	scanf("%d",&j);
	for(i=0; i<n; i++)
	{
		if(arr[i] == j)
		{
			printf("The item is in arr[%d] position.",i);
			flag = 0;
			break;
		}
	}
	if(flag == 1)
	{
		printf("The item does not exist.");
	}
	return 0;
}
