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

/*#include<stdio.h>
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
}*/

/*#include<stdio.h>
int main()
{
    int choice;
    int inputId;
    int Aadhaar_Id=1234;
    int Apaar_Id=2345;
    int Passport=4566;
    int Pan_Number=5678;
    int Driving_License=4987;
    printf("------KYC Verification System-----\n");
    printf("1. Aadhaar ID\n");
    printf("2. Apaar ID\n");
    printf("3. Passport\n");
    printf("4. Pan Number\n");
    printf("5. Driving License\n");
    printf("--------------\n");
    printf("Enter your choice(1-5): ");
    scanf("%d",&choice);
    printf("Enter your input id: ");
    scanf("%d",&inputId);

    switch(choice)
    {

        case 1:
        if(inputId==Aadhaar_Id)
        printf("Aadhaar Verified.\n");
        else
        printf("Aadhar not verified.\n");
        break;

        case 2:
        if(inputId==Apaar_Id)
        printf("Apaar Verified.\n");
        else
        printf("Apaar not verified.\n");
        break;

        case 3:
        if(inputId==Passport)
        printf("Passport Verified.\n");
        else
        printf("Passport not verified.\n");
        break;

        case 4:
        if(inputId==Pan_Number)
        printf("PAN Verified.\n");
        else
        printf("PAN not verified.\n");
        break;

        case 5:
        if(inputId==Driving_License)
        printf("Driving License Verified.\n");
        else
        printf("Driving License not verified.\n");
        break;

        default:
        printf("Invalid input!\n");

    }


    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double d,root1,root2,realPart,imagPart;
    printf("Enter the three coefficients: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    {
        printf("Invalid quadratic Equation.\n");
        return 0;
    }
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Root 1=%.2lf\n",root1);
        printf("Root 2=%.2lf\n",root2);
        printf("The roots are distinct and real\n");
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("Root 1 = Root 2= %.2lf\n",root1);
        printf("Roots are equal and real.\n");
    }
    else
    {
      realPart=-b/(2*a);
      imagPart=sqrt(-d)/(2*a);
      printf("Roots are complex and imaginary.\n");  
      printf("Root 1=%.2lf+%.2lfi\n",realPart,imagPart);
      printf("Root 2=%.2lf+%.2lfi\n",realPart,imagPart);
    }
    return 0;
}*/

