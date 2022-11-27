#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float h=0.2,w=1,area,peri;
    printf("Height of rectangle = %.1f metre\n",h);
    printf("Width of rectangle = %.1f metre\n",w);
    peri= 2*(w+h);
    area= w*h;
    printf("Area = %.1f metre sq \nPerimeter = %.1f metre",area,peri);
    return 0;

}