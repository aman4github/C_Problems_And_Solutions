#include<stdio.h>
 
int main()
{
	int i,j,n,d1=0,d2=0,a[100][100];
	printf("Enter size of square matrix : ");
	scanf("%d",&n);
	printf("Enter Elements of matrix : \n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
        	if(i==j)
			{
				d1+=a[i][j];	
			}
			if((i+j)==(n-1))
			{
				d2+=a[i][j];
			}
		}
	}
	printf("\nFirst Diagonal Sum = %d",d1);
	printf("\nSecond Diagonal Sum = %d",d2);
	return 0;
}
