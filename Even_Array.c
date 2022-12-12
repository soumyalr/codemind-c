#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ct=0;
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           ct++;
       }
    }
    if(ct==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}