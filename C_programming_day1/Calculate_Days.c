#include<stdio.h>
#include<conio.h>

int main()

 {
    
    int TotalDays;
    printf("Enter Total number of days: ");
    scanf("%d", &TotalDays);
    int NO_OF_COMPLETE_YEARS = TotalDays / 365;
    int NO_OF_WEEKS_LEFTOUT = (TotalDays % 365) / 7;
    int NO_OF_DAYS_LEFTOUT = (TotalDays % 365) % 7;
    printf("Number of Years: %d\n",NO_OF_COMPLETE_YEARS );
    printf("Number of Weeks: %d\n",NO_OF_WEEKS_LEFTOUT);
    printf("Number of Days: %d\n",NO_OF_DAYS_LEFTOUT);
    return 0;
}
