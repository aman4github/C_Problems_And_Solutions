#include<stdio.h>
int main()
{
	int arr[100],i,n,max,min;
	printf("Enter the limits : ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min = arr[0];
	max = arr[0];
	
	for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
