#include <stdio.h>
int find_gcd(int, int);
int find_lcm(int, int);
int main()
{
    int n1, n2, gcd, lcm;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

	gcd = find_gcd(n1,n2);

    printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    
    lcm = find_lcm(n1,n2);
    printf("L.C.M of %d and %d is %d", n1, n2, lcm);

    return 0;
}

int find_gcd(int n1,int n2)
{
	int i,gcd;
	for(i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}

int find_lcm(int n1, int n2)
{
	int lcm,gcd;
	gcd = find_gcd(n1,n2);
	lcm = (n1 * n2) / gcd;
	return lcm;
}

