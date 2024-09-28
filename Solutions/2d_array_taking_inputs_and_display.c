#include<stdio.h>
int main()
{
	int arr[100][100];
	int row, col, i, j;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	printf("Enter the number of columns : ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the value of arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Arrey : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("%d\t",arr[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
