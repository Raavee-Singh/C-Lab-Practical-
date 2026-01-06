#include<stdio.h>
#include<string.h>
void main()
{
    char description[50];
    char keyword[50];
    printf("Enter the course description: ");
    gets(description);
    printf("Enter the keyword:");
    scanf("%s",keyword);
    if(strstr(description,keyword))
    printf("Keyword found in the course description.");
    else
    printf("Keyword not found in the course description.");
}