#include <stdio.h>

// recursion function
int Pow(int x, int y)
{
	if(y == 0) 
	return 1;
	return x * Pow(x, y-1);
}

int main()
{
	int x, y;
	printf("Enter the number : ");
	scanf("%d", &x);
	printf("Enter the power : ");
	scanf("%d", &y);
	printf("The result is: %d", Pow(x, y));
	return 0;
}
