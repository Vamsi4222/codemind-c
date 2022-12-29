#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=0,k2=0,a,b;
    scanf("%d",&n);
    printf("%d ",0);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=2+k1;
            printf("%d ",a);
            k1=k1+2;
        }
        else
        {
           printf("%d ",k2);
           k2++;
        }
    }
}