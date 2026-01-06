#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,key,mid,low,high,book[n];
    printf("Enter the number of books: ");
    scanf("%d",&n);
    printf("Enter the bookIDs in ascending order:");
    for(i=0;i<n;i++) 
    {
        printf("%d",&book[i]);
    }   
    printf("Enter the bookID to be searched:");
    scanf("%d",&key);
    low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==book[mid])
        {
            printf("The Id is found at % position.\n",mid+1);
            exit(0);
        }
        else if(key>book[mid])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("The Id is not found.\n");
}