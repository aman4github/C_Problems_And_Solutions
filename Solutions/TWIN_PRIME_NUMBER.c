#include<stdio.h>
int check_prime(int );
int main()
{   

    int start, end, a, b, i;

    printf("Enter starting point : ");
    scanf("%d", &start);

    printf("Enter ending point : ");
    scanf("%d", &end);

    for(i = start; i < end; i++)
    {
        a = check_prime(i);
        b = check_prime(i+2);
		if(a == 1 && b == 1)
        {            
            printf("Twin prime = %d and %d\n", i, i + 2);
        }                
    }    

    return 0;
}

int check_prime(int n)
{
    int i;
	if(n == 1)
    {
        return 0;
    }

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
