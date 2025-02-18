/*

E E E E E
D D D D
C C C
B B
A

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=number; row>=1; row--)
	{
		for(column=1; column<=row; column++)
		{
			printf("%c ",row+64);
		}
		printf("\n");
	}
}
