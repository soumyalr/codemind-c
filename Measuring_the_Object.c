#include<stdio.h>
int main()
{
    int n,x,y,z;
    scanf("%d%d%d%d",&n,&x,&y,&z);
    if(n==x+y||n==x+z||n==y+z||n==x||n==y||n==z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}