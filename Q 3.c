#include<stdio.h>
#include<string.h>
int main()
{
	int i,word=0;
	char ch[100];
	printf(" \n enter the sentence:");
	scanf("%[\n]",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if( ch[i]==' ')
		{
		word++;
		}
	}
	printf( "number of words is %d \n",word +1);
	return 0;
}

