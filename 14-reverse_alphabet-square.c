/*

n n n n n n n
. . . . . . n
E E E E E . n
D D D D D . n
C C C C C . n
B B B B B . n
A A A A A . n
 
*/
#include<stdio.h>
void main()
{
	int row, number ,column ;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=number;row>=1;row--)
	{
		for(column=number;column>=1;column--)
		{
			printf("%c ",row+64);
		}
		printf("\n");
	}
}
