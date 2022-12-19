#include<stdio.h>
#include<math.h>
int main(){
    int n,q,ct=0,r,sum=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        ct++;
        q=q/10;
    }
    q=n;
    while(q>0)
    {
        r=q%10;
        sum=sum+pow(r,ct);
        ct--;
        q=q/10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}