#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,i,arr[50],count=1;
    printf("Number of Elements in array : ");
    scanf("%d",&n);
    printf("Enter Array : ");
    for(i=0;i<n;i++)
       { scanf("%d",&arr[i]); }
    for(i=0;i<n-2;i++)
    {
        if((arr[i]==arr[i+1]) && (arr[i]==arr[i+2]))
            {
             count=0;
             printf("Array is a Triple");
             break;
            }
    }
    if (count!=0)
        printf("Not A Triple");
    return 0;
}