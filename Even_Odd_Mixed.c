#include<stdio.h>
int main()
{
    int n,ct=0,c=0,c2=0,r,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        if(r%2==0)
        {
            c++;
        }
        else
        {
            c2++;
        }
        q=q/10;
        ct++;
    }
    if(c==ct)
    {
        printf("Even");
    }
    else if(c2==ct)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    
}