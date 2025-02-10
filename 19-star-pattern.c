/*

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(column=1;column<=row;column++)
		{
			printf("* ");	
		}
		printf("\n");
	}
}
