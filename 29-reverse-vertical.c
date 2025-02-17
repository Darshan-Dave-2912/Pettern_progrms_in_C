/*

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

*/
#include<stdio.h>
void main()
{
	int row ,number, column;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=number; row>=1; row--)
	{
		for(column=row; column>=1; column--)
		{
			printf("%d ",row);
		}
		printf("\n");
	}
}
