#include <stdio.h>
#include <stdio.h>

int main()
{
    int i, j,n,k,l, num,count=0, prime,arr[count],large;

    /* Input a number from user */
    printf("Enter  number : ");
    scanf("%d", &num);
    printf("Prime Factors of %d are : ", num);

    for(i=2; i<=num; i++)
    {
        
        if(num%i==0)
        {
            
            prime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    prime = 0;
                    break;
                }
            }

            
            if(prime==1)
            {
                printf("%d, ", i);
                count++;
                for(k=0;k<count;k++)
            {
              arr[k]=i;
            }
            }
            
        }
    }
    large=arr[0];
    for(l=1;l<count;l++)
      if (arr[l]>large)
      {large=arr[l];}
    printf("\nLargest Prime Factor of %d is %d\n",num,large);

    return 0;
}