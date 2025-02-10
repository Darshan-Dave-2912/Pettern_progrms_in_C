/*

A
A B
A B C
A B C D
A B C D E

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1;row<=number;row++)
	{
		for(column=1;column<=row;column++)
		{
			printf("%c ",column+64);
		}
		printf("\n");
	}
}
