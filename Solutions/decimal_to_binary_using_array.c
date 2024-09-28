#include<stdio.h>
#include<math.h>
int main()
{
	int n, arr[100], i = 0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n != 0)
	{
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	for(i = i - 1; i >= 0; i--)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
