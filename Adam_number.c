#include<stdio.h>
int main()
{
    int n,rem,rev=0,sq2,rem2,rev2=0;
    scanf("%d",&n);
    int sq=n*n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    sq2=rev*rev;
    while(sq2>0)
    {
        rem2=sq2%10;
        rev2=rev2*10+rem2;
        sq2=sq2/10;
    }
    if(sq==rev2)
    printf("True");
    else
    printf("False");
}