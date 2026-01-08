#include<stdio.h>
int main()
{
    char first[50], last[50], full[100];
    printf("Enter first name: ");
    scanf("%s", first); 
    printf("Enter last name: ");
    scanf("%s", last);
    int i = 0, j = 0, length = 0;
    while (first[i] != '\0') 
    {
        full[length++] = first[i++];
    }
    full[length++] = ' '; 
    while (last[j] != '\0') 
    {
        full[length++] = last[j++];
    }
    full[length] = '\0'; 
    printf("Full name: %s\n", full);
    printf("Length of full name: %d\n", length);
    if(length > 20)
    {
        printf("The full name is too long.\n");
    }
    else
    {
        printf("The full name is of acceptable length.\n");
    }
    return 0;
}