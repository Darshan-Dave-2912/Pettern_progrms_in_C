/*
		1
	  1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/
#include<stdio.h>
void main()
{
	int row, column, number, space;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(space=number-1; space>=row; space--)
		{
			printf("  ");
		}
		for(column=1; column<=row; column++)
		{
			printf("%d ",column);
		}
		printf("\n");
	}
}
