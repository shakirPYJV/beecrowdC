#include<stdio.h>

int main()
{

int productCode1,productCode2,numUnits1,numUnits2; 
double pricePerUnit1,pricePerUnit2,valueToPay;

scanf("%d%d%lf",&productCode1,&numUnits1,&pricePerUnit1);
scanf("%d%d%lf",&productCode2,&numUnits2,&pricePerUnit2);
valueToPay = (numUnits1 * pricePerUnit1) + (numUnits2 * pricePerUnit2) ;

printf("VALOR A PAGAR: R$ %.2lf\n",valueToPay);

return 0;
}

