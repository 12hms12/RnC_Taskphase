#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[50],i,temp;
    printf("Number of elements in array : ");
    scanf("%d",&n);
    printf("Enter Array : ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Reverse Array : ");
    for(i=0;i<n/2;i++)
    {
      temp=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }

    return 0;
}