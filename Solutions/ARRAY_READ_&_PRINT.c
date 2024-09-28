#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    {
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
		}
	printf("\nOutput values are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	}
    return 0;
}

