/*#include<stdio.h>
#include<math.h>
int main()
{
    double distance, x1, y1, x2, y2;
    printf("Enter the coordinates of the first point(x1,y1): ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter the coordinates of the second point(x2,y2): ");
    scanf("%lf %lf",&x2,&y2);
    distance=sqrt(pow(x2-x1,2)+(y2-y1,2));
    printf("The distance between the given points is:%.2lf units.",distance);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks obtained(0-100): ");
    scanf("%d",marks);
    if(marks<0||marks>100)
    {
        printf("Invalid input.\n");
        return 0;
    }
    if(marks>=90)
    {
        printf("Grade A\n");}
    else if(marks>=75){
        printf("Grade B\n");}
    else if(marks>=60);{
        printf("Grade C\n");}
    if(marks<=50){
        printf("Grade D\n");}
    else {
        printf("Grade F\n");
    }
    return 0;
}
