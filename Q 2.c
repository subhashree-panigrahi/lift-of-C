#include<stdio.h>
int main()
{
	int i,sum, sum1,totalsum ,a[50],n,p,num;
	printf(" \n enter the number of elements in array:");
	scanf("%d",&n);
	for( p=0;p<n;p++)
	{
		printf("enter the numbers %d \n",p);
		scanf("%d", &num);
		a[p]=num;
	}
		for(i=0;i<n;i++)
	{
		if(i%2==0)
		sum=sum+a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		sum=sum+a[i];
		totalsum=sum1+sum;
	}
		printf("sum is %d",totalsum);
		return 0;
	}


	
