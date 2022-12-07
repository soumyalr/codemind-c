#include<stdio.h>
int main(){
    int n,temp,sq,d,flag=0,r;
    scanf("%d",&n);
    sq=n*n;
    d=10;
    temp=n;
    while(temp!=0)
    {
        r=sq%d;
        if(n==r)
        {
            flag=1;
            break;
        }
        temp=temp/10;
        d=d*10;
    }
    if(flag==1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}