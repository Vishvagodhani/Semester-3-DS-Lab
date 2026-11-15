//WAP to convert number of days into year, week & days [e.g. 375 days mean 1 
//year, 1 week and 3 days]. 
#include<stdio.h>

void main()
{
    int total, year, week, days;

    printf("Enter total days: ");
    scanf("%d", &total);

    year = total / 365;
    week = (total % 365) / 7;
    days = (total % 365) % 7;

    printf("%d Year, %d Week and %d Days", year, week, days);

}