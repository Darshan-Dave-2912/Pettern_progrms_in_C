/*

a
b b
c c c
d d d d
e e e e e

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(column=1; column<=row; column++)
		{
			printf("%c ",row+96);
		}
		printf("\n");
	}
}
