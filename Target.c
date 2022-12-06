#include<stdio.h>
int main()
{
    int i,ct=0;
    for(i=1;i<=4;i++)
    {
        int a;
        scanf("%d",&a);
        if(a>=10)
        {
            ct++;
        }
    }
    if(ct==4)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}