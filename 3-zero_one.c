/*

 0 1 0 1 0 1 0 1 0 1...n

*/

#include<stdio.h>

void main()
{
	int number,i;
	
	printf("enter positive number:");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		printf("%d ",i%2);
	}
}
