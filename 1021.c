#include<stdio.h>
int main()
{
    double notes; 
    int note,hand;
    scanf("%lf",&notes);
    note = notes / 100;
    hand = (int)notes % 100;
    printf("%d nota(s) de R$ 100.00\n",note);
    note = hand / 50;
    hand = hand % 50;
    printf("%d nota(s) de R$ 50.00\n",note);
    note = hand / 20;
    hand = hand % 20;

    printf("%d nota(s) de R$ 20.00\n",note);
    note = hand / 10;
    hand = hand % 10;
    printf("%d nota(s) de R$ 10.00\n",note);
    note = hand / 5;
    hand = hand % 5;
    printf("%d nota(s) de R$ 5.00\n",note); 
    note = hand / 2;
    hand = hand % 2; 
    printf("%d nota(s) de R$ 2.00\n",note);



}