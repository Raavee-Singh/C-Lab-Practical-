#include<stdio.h>
void swapbyvalue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("Preview swap by value= %d %d\n",a,b);
}
void swapbyreference(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("Preview swap by reference= %d %d\n",*a,*b);
}
    int main()
    {
        int x,y;
        printf("Enter two currency values:");
        scanf("%d%d",&x,&y);
        swapbyvalue(x,y);
        printf("After swap by value= %d %d\n",x,y);
        swapbyreference(&x,&y);
        printf("After swap by reference= %d %d\n",x,y);
        return 0;
    }