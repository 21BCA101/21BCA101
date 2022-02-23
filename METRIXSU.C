/*write a program to enter to [3][3] metrix and print the sum of it.
Author : Smit Lad
Date : 21-02-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//logic : input value into 2D array....
	for(i=0;i<3;i++)        //    row.
	{
		for(j=0;j<3;j++)            //    column.
		{
			printf("\n enter value m1[%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)        //    row.
	{
		for(j=0;j<3;j++)            //    column.
		{
			printf("\n enter value m2[%d][%d] : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	//    print 2D array....

	printf("\n");
	printf(" ==> First Metrix");
	printf("\n\n");

	for(i=0;i<3;i++)        //    row.
	{
		for(j=0;j<3;j++)            //    column.
		{
			printf("%d \t",m1[i][j]);
		}
			printf("\n");
	}
	printf("\n");
	printf(" ==> Second Metrix");
	printf("\n\n");

	for(i=0;i<3;i++)        //    row.
	{
		for(j=0;j<3;j++)            //    column.
		{
			printf("%d \t",m2[i][j]);
		}
			printf("\n");
	}
	// Sum of metrix 1 & metrix 2....
	printf("\n\n");
	printf("\t ===> Sum of Metrix <=== ");
	printf("\n\n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j] = m1[i][j] + m2[i][j];
			printf("%d \t",m3[i][j]);
		}
		printf("\n");
	}
	getch();
}

