#include <stdio.h>
int main()  
{
    int n,m,min,i,max,sum;
    scanf("%d%d",&n,&m);
     max=(n>m) ? n:m;
    min=(n<m)  ? n:m;
    sum=max; 
    while(max%min!=0)
    {
     max=max+sum;
     
    }
    printf("%d",max);
}