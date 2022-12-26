#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);
    double ci;
    ci=(p*(pow((1+(r/100)),t)));
    printf("%0.2lf",ci);
}