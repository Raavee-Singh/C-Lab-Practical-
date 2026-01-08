#include<stdio.h>
void main() 
{
    int branches, products, i, j;
    printf("Enter number of branches: ");
    scanf("%d", &branches);
    printf("Enter number of products: ");
    scanf("%d", &products);
    int unit[branches][products];
    int revenue[products];
    printf("Enter units sold for each product in each branch:\n");
    for(i = 0; i < branches; i++)
    {
        printf("Branch %d:\n", i + 1);
        for(j = 0; j < products; j++)
        {
            printf("Product %d unit: ", j + 1);
            scanf("%d", &unit[i][j]);
        }
    } 
    printf("Enter revenue for each product:\n");
    for(j = 0; j < products; j++)
    {
        printf("Product %d revenue: ", j + 1);
        scanf("%d", &revenue[j]);
    }
    printf("\nTotal revenue for each branch:\n");
    for(i = 0; i < branches; i++)
    {
        int total = 0;
        for(j = 0; j < products; j++)
        {
            total += unit[i][j] * revenue[j];
        }
        printf("Branch %d: %d\n", i + 1, total);
    }   
}