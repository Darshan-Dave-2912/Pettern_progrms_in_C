/*
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

*/
#include<stdio.h>
void main()
{
	int row, number, column, space;
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number;row++)
	{
		for(space=number-1; space>=row; space--)
		{
			printf("  ");
		}
		for(column=1; column<=row; column++)
		{
			printf("%d ",row);
		}
		printf("\n");
	}
}
