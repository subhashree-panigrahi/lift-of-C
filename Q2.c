#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the temperature in celsius:");
    scanf("%f",&c);
    f=(9*(c+32))/5;
    printf("temperature in fahrenheit is %f\n",f);
     return 0;
}
