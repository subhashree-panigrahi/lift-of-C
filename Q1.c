#include<stdio.h>
int main()
{
    int num1,num2,x,y,z,a,b;
    printf("enter the values of num1 and num2:");
    scanf("%d %d",&num1,&num2);
    x=num1+num2;
    y=num1-num2;
    z=num1*num2;
    a=num1/num2;
    b=num1%num2;
    printf("sum of two numbers is %d\n",x);
    printf("difference of two numbers is %d\n",y);
    printf("multiplication  of two numbers is %d\n",z);  
    printf("divison of two numbers is %d\n",a);    
    printf("modulus of two numbers is %d\n",b);
    return 0;
}
