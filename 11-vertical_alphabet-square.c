/*

A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
F F F F F
. . . . .
. . . . .
Z Z Z Z Z

*/

#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1;row<=number;row++)
	{
		for(column=1;column<=number;column++)
		{
			printf("%c ",row+64);
		}
		printf("\n");
	}
	
}
