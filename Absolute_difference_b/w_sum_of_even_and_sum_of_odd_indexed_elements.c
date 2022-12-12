#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,sum2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum2=sum2+a[i];
        }
    }
    if(sum>sum2){
    printf("%d",sum-sum2);
    }
    else
    {
        printf("%d",sum2-sum);
    }
}