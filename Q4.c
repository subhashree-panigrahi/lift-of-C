#include<stdio.h>
int main()
{
    float per,phy,chem,bio,math,comp;int max=350;
    printf("enter the marks of all five subjects:");
    scanf("%f %f %f %f %f ",&phy,&chem,&bio,&math,&comp);
    per=(phy+chem+bio+math+comp)/max*100;
    printf("maximum percentage is %f\n",per);
   if(per>=90)
   {
       printf("\n grade is A");
   }
    else if(per>=80)
   {
       printf("\n grade is B");
   }
   else if(per>=70)
   {
       printf("\n grade is C");
       }
      else if(per>=60)
       {
           printf("\n grade is D");
       }
      else if(per>=40)
       {
           printf("\n grade is E");
       }
       else if(per>0 && per<40)
       {
           printf("\n grade is F");
       }return 0;
}
