/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1


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
			printf("%d ",column);
		}
		printf("\n");
	}
}
