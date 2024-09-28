#include<stdio.h>
int main()
{
	int a[100][100],ar[100][100],arr[100][100];
	int row, col, i, j;
	printf("Enter the number of rows for both matrix : ");
	scanf("%d",&row);
	printf("Enter the number of columns for both matrix : ");
	scanf("%d",&col);
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the value of arr[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Arrey : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the value of arr[%d][%d] : ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Arrey : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("%d\t",ar[i][j]);
		}
		printf("\n\n");
	}
	
	printf("Matrix multiplication of both Arrey : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		arr[i][j] = a[i][j] * ar[i][j];
		printf("%d\t",arr[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
