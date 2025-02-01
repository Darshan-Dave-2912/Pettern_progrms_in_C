/*
n...5 4 3 2 1
*/


#include<stdio.h>
void main()
{
	int i,number;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(i=number;i>=1;i--)
	{
		printf("%d ",i);
	}
}
