#include <stdio.h>

int fibonacci(int num)
{
	if(num == 0 || num == 1)
		return num;
	return fibonacci(num-1) + fibonacci(num-2);
}

int main()
{
	int n, i;
	printf("Enter n terms: ");
	scanf("%d", &n);
	printf("The fibonacci series:\n");
	for(i=0; i<n; i++)
		printf("%d ", fibonacci(i));
	return 0;
}
