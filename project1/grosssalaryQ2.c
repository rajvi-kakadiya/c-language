//Gross salary calcultor

#include<stdio.h>
int main()
{
    float base_salary,hra,da,ta;

    printf(" enter Basic Salary : ");
    scanf("%f",&base_salary);

    hra=0.10*base_salary;
    printf("HRA\t:%.2f\n",hra);
   
    da=0.05*base_salary;
    printf("DA\t:%.2f\n",da);
    
    ta=0.08*base_salary;
    printf("TA\t:%.2f\n",ta);


    printf("Gross Salary :%.2f",base_salary+hra+da+ta);
    return 0;



}