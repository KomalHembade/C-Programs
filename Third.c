#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int months, days;
    printf("Enter days:");
    scanf("%d, &days");
    months = days/30;
    days = days % 30;
    printf("Months = %d  Days = %d, months, days");
    return 0;
}
