/*

A A A A A
B B B B
C C C
D D
E

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(column=number; column>=row; column--)
		{
			printf("%c ",row+64);
		}
		printf("\n");
	}
}
