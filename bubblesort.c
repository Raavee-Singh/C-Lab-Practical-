#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,temp,scores[30];
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the scores of students: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(scores[j]>scores[j+1])
            {
                temp=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
            }
        }
    }
    printf("Sorted scores in ascending order: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",scores[i]);
    }
    printf("\n");
}