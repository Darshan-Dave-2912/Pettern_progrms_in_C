/*

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/
#include<stdio.h>
void main()
{
	int row ,column ,number ;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(column=number; column>=row; column--)
		{
			printf("%d ",column);
		}
		printf("\n");
		//printf("%d ",row);
	}
}
