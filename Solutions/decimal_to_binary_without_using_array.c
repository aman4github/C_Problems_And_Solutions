#include <stdio.h>
int main()
{
    int n, b = 0, r, p = 1;
    printf("Enter a Decimal number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        r = n % 2;
        b = b + r * p;
        n = n / 2;
        p = p * 10;
    }
    printf("%d", b);
    return 0;
}
