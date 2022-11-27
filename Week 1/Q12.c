#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int *p1,*p2,*large;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    p1=&n1;
    p2=&n2;
    if(*p1>*p2)
        large=p1;
    else
        large=p2;
    printf("largest number : %d",*large);
    return 0;
}