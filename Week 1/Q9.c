#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Multiplication table from 1 to : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%dx%d = %d, ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}