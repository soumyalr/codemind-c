#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,sq,r;
    scanf("%d%d%d",&x,&y,&m);
    sq=pow(x,y);
    r=sq%m;
    printf("%d",r);
}