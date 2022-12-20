#include<stdio.h>
int main()
{
    float bas,hra,da,pf,gross;
    scanf("%f%f%f",&bas,&hra,&da);
    pf=bas*12/100;
    gross=bas+hra+da+pf+gross;
    printf("%0.2f
%0.2f
",pf,gross);
}