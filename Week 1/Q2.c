#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang1 ,ang2 , ang3 ;
    printf("Enter first angle : ",ang1);
    scanf("%d",&ang1);
    printf("Enter second angle : ");
    scanf("%d",&ang2);
    ang3= 180 - ang1 - ang2 ;
    printf("Third angle = %d degrees",ang3);

    return 0;
}