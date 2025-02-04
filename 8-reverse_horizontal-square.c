/*

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter posivite number :");
	scanf("%d",&number);
	
	for(row=number;row>=1;row--)
	{
		for(column=number;column>=1;column--)
		{
			printf("%d ",column);
		}
		printf("\n");
	}
}
