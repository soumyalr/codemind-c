#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ivar,sum=0;
    float fvar;
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        fvar=sqrt(a[i]);
        ivar=fvar;
        if(ivar==fvar)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}