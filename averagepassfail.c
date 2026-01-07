#include<stdio.h>
int isPassed(int m1,int m2,int m3)
{
    if(m1>=40 && m2>=40 && m3>=40)
    return 1;
    else
    return 0;
}
void main()
{
    int sub1, sub2, sub3;
    float average;
    printf("Enter the marks of three subjects:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    average=(sub1+sub2+sub3)/2.0;
    printf("Average=%.2lf\n",average);
    if(isPassed(sub1,sub2,sub3))
    printf("The student has passed.\n");
    else
    printf("The student has failed.\n");
}