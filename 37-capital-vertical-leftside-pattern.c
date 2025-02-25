/*


        A
      B B
    C C C
  D D D D
E E E E E

*/
#include<stdio.h>
void main()
{
	int row, number, column, space;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(row=1; row<=number; row++)
	{
		for(space=number-1; space>=row; space--)
		{
			printf("  ");
		}
		for(column=1; column<=row; column++)
		{
			printf("%c ",row+64);
		}
		printf("\n");
	}
}
