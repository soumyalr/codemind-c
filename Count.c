#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,c2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else if(a[i]%2!=0)
        {
            c2++;
        }
    }
    printf("%d %d",c,c2);
}