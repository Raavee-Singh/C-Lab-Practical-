#include<stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int balance1, balance2;
    printf("Enter two balances: ");
    scanf("%d%d",&balance1,&balance2);
    printf("Balance 1 before swap:%d\n",balance1);
    printf("Balance 2 before swap:%d\n",balance2);
    swap(&balance1, &balance2);
    printf("Balance 1 after swap:%d\n",balance1);
    printf("Balance 2 after swap:%d\n",balance2);
}