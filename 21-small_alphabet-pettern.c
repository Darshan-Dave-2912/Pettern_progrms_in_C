/*

a
a b
a b c
a b c d
a b c d e

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
			printf("%c ",column+96);
		}
		printf("\n");
	}
}
