/*
WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/
#include<stdio.h>
main()
{
	int mat1[3][3], mat2[3][3], r, c, k, mul[3][3];
	
	printf("\n\n\tEnter matrix 1-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
			
		{
			printf("\n\n\tEnter the matrix[%d][%d] : ", r, c);
			scanf("%d",&mat1[r][c]);
		}
	}
	
	printf("\n\n\tEnter matrix 2-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
			
		{
			printf("\n\n\tEnter the matrix[%d][%d] : ", r, c);
			scanf("%d",&mat2[r][c]);
		}
	}

    printf("\n\n\tDisplay matrix 1-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("  %d", mat1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\tDisplay matrix 2-------------------------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("  %d", mat2[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\tAddition of Two Matrices--------------------------\n\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("    %d", mat1[r][c] + mat2[r][c]);
		}
		printf("\n");
	}
	printf("\n\n\tSubtraction of Two Matrices--------------------------\n\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("  %d", mat1[r][c] - mat2[r][c]);
		}
		printf("\n");
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mul[r][c] = 0;
			for(k=0;k<3;k++)
			{
				mul[r][c]+=mat1[r][k] * mat2[k][c];
			}
		}
	}
	
	printf("\n\n\tMultiplication of Two Matrices--------------------------\n\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("  %d", mul[r][c]);
		}
		printf("\n");
	}
	

}
