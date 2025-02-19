/*

e d c b a
e d c b
e d c
e d
e

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
			printf("%c ",column+96);
		}
		printf("\n");
	}
}

