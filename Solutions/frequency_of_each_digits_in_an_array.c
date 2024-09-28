#include<stdio.h>
int main()
{
	int arr[100],n,i,j,flag[100],count;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		flag[i] = -1;
	}
	
	printf("Array : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		count = 1;
		for(j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				flag[j] = 0;
			}	
		}
		if(flag[i] != 0)
		{
			flag[i] = count;
		}
	}
	printf("______________\n");
	for(i = 0; i < n; i++)
	{
		if(flag[i] != 0)
		{
			printf("%d occurs = %d times\n",arr[i],flag[i]);
		}
	}
	return 0;
}
