#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rev=n%10;
        n=n/10;
        printf("%d",rev);}}