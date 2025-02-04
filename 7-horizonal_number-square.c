/*

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/
#include<stdio.h>
void main()
{
	int row, number, column;
	
	printf("enter positivite number :");
	scanf("%d",&number);
	
	for(row=1;row<=number; row++)
	{
		for(column=1;column<=number; column++)
		{
			printf("%d ",column);
		}
		printf("\n");
	}
}
