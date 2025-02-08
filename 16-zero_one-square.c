/*

1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1

*/
#include<stdio.h>
void main()
{
	int row, number,column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1;row<=number;row++)
	{
		for(column=1;column<=number;column++)
		{
			printf("%d ",column%2);
		}
		printf("\n");
	}
}
