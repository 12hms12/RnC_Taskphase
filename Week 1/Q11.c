#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[n],even[50],odd[50],i,j=0,k=0,l,m;
    printf("Number of elements in array : ");
    scanf("%d",&n);
    printf("Enter array : ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }
    printf("Even Numbers = ");
    for(l=0;l<j;l++)
        {
            printf("%d, ",even[l]);
        }
    printf("\nOdd Numbers = ");
    for(m=0;m<k;m++)
    {
        printf("%d, ",odd[m]);
    }

    return 0;
}