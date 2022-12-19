#include<stdio.h>
#include<math.h>
int main()
{
    int n,iroot;
    float froot;
    scanf("%d",&n);
    froot=sqrt(n);
    iroot=froot;
    
    if(froot==iroot)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}