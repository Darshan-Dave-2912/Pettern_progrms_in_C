/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	char specialchar;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	printf("\n");
	
	printf("enter special character :");
	scanf(" %c",&specialchar);
	
	for(row=1;row<=number;row++)
	{
		for(column=1;column<=number;column++)
		{
			printf(" %c",specialchar);
		}
		printf("\n");
	}
}
