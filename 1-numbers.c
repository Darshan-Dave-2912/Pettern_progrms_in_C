/*
1 2 3 4 5...n
*/

#include<stdio.h>
void main()
{
	int i,number;
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		printf("%d ",i);
	}
}
