/*

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=number; row>=1; row--)
	{
		for(column=number; column>=row; column--)
		{
			printf("%d ",row);
		}
		printf("\n");
	}
}
