#include<stdio.h>
int main()
{
    int l,b,w,c,ar;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar=(l+2*w)*(b+2*w)-(l*b);
    printf("%d",c*ar);
}