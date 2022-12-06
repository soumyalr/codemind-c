#include<stdio.h>
int main(){
    
    float n,gs,da,hra;
    scanf("%f",&n);
    if(n<=10000)
    {
        da=n*0.8;
        hra=n*0.2;
        gs=n+da+hra;
        printf("%0.2f",gs);
    }
    else if(n<=20000)
    {
        da=n*0.9;
        hra=n*0.25;
        gs=n+da+hra;
        printf("%0.2f",gs);
    }
    else if(n>20000)
    {
        da=n*0.95;
        hra=n*0.3;
        gs=n+da+hra;
        printf("%0.2f",gs);
    }
}