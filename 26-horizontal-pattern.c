/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=number; row>=1; row--)
	{
		for(column=1; column<=row; column++)
		{
			printf("%d ",column);
		}
		printf("\n");
	}
}
