#include <stdio.h>

int gcd(int x, int y)
{
	if(x == 0) 
		return y;
	if(y == 0 || x == y)
		return x;
	if(x < y)
		return gcd(x, y-x);
	return gcd(x-y, y);
}

int lcm(int x, int y)
{
	static int val = 0;
	val += y;
	if(val % x == 0 && val % y == 0)
		return val;
	return lcm(x, y);
}

int main()
{
	int x, y;
	printf("Enter the 1st number : ");
	scanf("%d", &x);
	printf("Enter the 2nd number : ");
	scanf("%d", &y);
	printf("GCD: %d\nLCM: %d", gcd(x, y), lcm(x, y));
	return 0;
}
