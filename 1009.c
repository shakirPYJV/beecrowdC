#include<stdio.h>
int main()
{

char name[20];
double fixedSalary,bonusSalary,totalValue,totalSalary;
scanf("%s%lf%lf",&name,&fixedSalary,&totalValue);
bonusSalary = (totalValue/100) * 15;
totalSalary = bonusSalary + fixedSalary;



printf("TOTAL = R$ %.2lf\n",totalSalary);



return 0;
}

