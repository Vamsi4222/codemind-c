
#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,c;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=p*pow((1+(r/100)),t);
    printf("%.2lf",c);
}
