#include<stdio.h>
int main(){
int  number, w_hours;
float salary,s_hours;
scanf("%d%d%f",&number,&w_hours,&s_hours);
salary = w_hours * s_hours;

printf("NUMBER = %d\n",number);
printf("SALARY = U$ %.2f\n",salary);
return 0;
}

