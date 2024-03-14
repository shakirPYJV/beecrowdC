#include<stdio.h>
#include<stdlib.h>

int major(int x, int y){

    int result = (x + y + abs(x-y))/2; 
    
    return result;

}
int main()
{

int a,b,c,major_1,major_2;
scanf("%d%d%d",&a,&b,&c);

major_1 = major(a,b);
major_2 = major(major_1,c);
printf("%d eh o maior\n",major_2);


return 0;
}

