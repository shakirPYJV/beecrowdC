#include<stdio.h>
int main()
{
    int age,days,months,years,hand;

    scanf("%d",&age);

    years = age/365;
    hand = age%365;
    
    months = hand/30;
    days = hand%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days); 

    


    return 0;
}
