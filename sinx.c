#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float sum, term, x, nume;
    int deg,i,fact;
    i=2,fact=1;
    printf("Enter the angle in degrees: ");
    scanf("%d",&deg);
    x=(deg*PI)/180;
    sum=x;
    nume=x;
    do
    {
        fact=fact*i*(i+1);
        nume=-nume*x*x;
        term=nume/fact;
        sum=sum+term;
        i=i+2;
    }while(fabs(term)>0.0001);   
    printf("The sine of %d degrees is approximately: %.2f\n",deg,sum);
    return 0;
}