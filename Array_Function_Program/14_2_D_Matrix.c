//Perform 2D matrix array
#include<stdio.h>
main()
{
	int mat[10][10], i, j, rsize,csize;
	printf("\n\n\tEnter the size of Rows : ");
	scanf(" %d",&rsize);
	printf("\n\n\tEnter the size of Columns : ");
	scanf(" %d",&csize);
	
	for(i=0;i<rsize;i++)
	{
		for(j=0;j<csize;j++)
		{
			printf("\n\n\tEnter the matrix value mat[%d][%d] : ",i,j);
			scanf(" %d",&mat[i][j]);
			
		}
	}
	printf("\n\n\t");
	for(i=0;i<rsize;i++)
	{
		for(j=0;j<csize;j++)
		{
			printf("  %d",mat[i][j]);
		}
		printf("\n\n\t");
	}
	
}
