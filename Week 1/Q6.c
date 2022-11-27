#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[50];
    int n;
    printf("Enter Numerical Value : ");
    gets(num);
    n=atoi(num);
    printf("String with numeric characters in integer form : %d",n);
    return 0;
}