/*

A B C D E
A B C D
A B C 
A B
A

*/
#include<stdio.h>
void main()
{
	int row ,number ,column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=number; row>=1; row--)
	{
		for(column=1; column<=row; column++)
		{
			printf("%c ",column+64);
		}
		printf("\n");
	}
}
