#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s=(a+b+c)*0.5;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",ar);
}