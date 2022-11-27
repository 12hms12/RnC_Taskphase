#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int days,years,weeks,days1,rem1,rem2;
    printf("Enter number of days : ");
    scanf("%d",&days);
    years=days/365 ;
    rem1 = days%365 ;
    weeks = rem1/7 ;
    days1 = weeks%7;
    printf("Number of years = %d \nNumber of weeks = %d \nNumber of days = %d",years,weeks,days1);
    return 0;

}