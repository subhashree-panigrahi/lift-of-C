#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number of rows:");
	scanf("%d",&c);
	for(a=0;a<c;a++)
	{
		for(b=0;b<c;b++)
	{
		if(a==b||a+b==(c-1))
		{
		printf("*");
		}
		else 
		{
		printf(" ");
	}
}
printf("\n");
}
}
