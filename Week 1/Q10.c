#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,column,row;
    printf("Enter Number : ");
    scanf("%d",&num);
    for(column=1;column<=num;column++)
    {
        for(row=1;row<=column;row++)
        {
            if((row+column)%2==0)
            {
                printf("1");
            }
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
