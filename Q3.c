#include<stdio.h>
int main()
{
    float area,radius,circum,dia;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    dia=2*radius;
    circum=2*(22/7)*radius;
    area=(22/7)*radius*radius;
    printf("diameter of circle is %f\n",dia);
    printf("circumference of circle is %f\n",circum);
    printf("area of circle is %f\n",area);
    return 0;
}
