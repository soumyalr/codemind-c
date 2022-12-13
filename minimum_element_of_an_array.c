#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}