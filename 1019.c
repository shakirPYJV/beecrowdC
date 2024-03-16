#include<stdio.h>
int main()
{
    int time,seconds,hours,minutes,hand;
    scanf("%d",&time);
    hours = time / 3600;
    hand = time % 3600;
    minutes = hand / 60;
    seconds = hand % 60 ;
    
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}
