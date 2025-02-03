/*

a b c d e...z
Ascii value has started 65 to 90

*/
#include<stdio.h>
void main()
{
	int i,number;
	
	printf("enter positive number :");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		printf("%c ",i+96);
	}
}
