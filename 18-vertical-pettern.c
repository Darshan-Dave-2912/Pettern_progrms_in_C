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
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(column=1; column<=row; column++)
		{
			printf("%d ",row);
		}
		printf("\n");
	}
}
