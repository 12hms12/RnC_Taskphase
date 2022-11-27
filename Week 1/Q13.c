#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem,i,j,temp,sum=0;
    printf("Enter Number : ");
    scanf("%d",&num);
    do
        {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
        }
    while(num!=0);
    // there is a better way to do this using nested loop, but it is not working so i used if statement
    if(sum>=10)
    {
        rem=0;
        rem=sum%10;
        sum=sum/10;
        sum=sum+rem;
    }
    printf("Number in final form = %d",sum);

    return 0;
}
