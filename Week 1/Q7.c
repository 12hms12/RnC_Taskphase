#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x,y;
    printf("Enter x coordinate : ");
    scanf("%d",&x);
    printf("Enter y coordinate : ");
    scanf("%d",&y);
    if (x>0 && y>0)
        printf("Point lies in first quadrant");
    else if (x<0 && y>0)
        printf("Point lies in second quadrant");
    else if (x<0 && y<0)
        printf("Point lies in third quadrant");
    else if (x>0 && y<0)
        printf("Point lies in fourth quadrant");
    else if (x==0 && y!=0)
        printf("Point lies on y-axis");
    else if (x!=0 && y==0)
        printf("Point lies on x-axis");
    else if ("x==0 && y==0")
        printf("Point lies on origin");
    return 0;

}
