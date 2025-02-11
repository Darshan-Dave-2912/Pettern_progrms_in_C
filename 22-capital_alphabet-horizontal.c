/*

A
B B
C C C
D D D D
E E E E E

*/
#include<stdio.h>
void main()
{
	int row, number ,column;
	
	printf("enter positivite number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(column=1; column<=row; column++)
		{
			printf("%c ",row+65);
		}
		printf("\n");
	}
}
