#include<stdio.h>
struct Book
{
    char author[50];
    char title[50];
    int year;
};
void main()
{
    int n,i;
    printf("Enter the number of books:");
    scanf("%d",&n);
    struct Book booklist[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the title, author and year of publish for book %d: ",i+1);
        scanf("%s%s%d",booklist[i].author,booklist[i].title, &booklist[i].year);
    }
    printf("\nLibrary Book Details:\n");
    for(i=0;i<n;i++)
    {
        printf("Book %d:%s by %s (%d)",i+1,booklist[i].author,booklist[i].title,&booklist[i].year);
    }
}