#include <stdio.h>
// #include <stdbool.h>
#include<conio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int getDayOfWeek(int day, int month, int year) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (month < 3)
        year--;
    int dayOfWeek = (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
    return dayOfWeek;
}

void printCalendar(int month, int year) {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     if(isLeapYear(year)==1){
    printf("Month: %s (Leap Year %d)\n", months[month - 1], year);
     }
     else{
        printf("Month: %s (Year %d)\n", months[month - 1], year);
     }
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    int dayOfWeek = getDayOfWeek(1, month, year);

    for (int i = 0; i < dayOfWeek; i++) {
        printf("     ");
    }

    int day = 1;
    while (day <= daysInMonth[month - 1]) {
        printf("%-5d", day);

        if (++dayOfWeek > 6) {
            dayOfWeek = 0;
            printf("\n");
        }

        day++;
    }

    printf("\n");
}

int main() {
    int month, year,i;

    printf("Enter the Year: ");
    scanf("%d", &year);
    // printf("Enter the Month (1-12): ");
    // scanf("%d", &month);

    printf("*......CALENDAR......*\n");
    // printCalendar(month, year);
    for(i=1;i<=12;i++){
        printCalendar(i, year);
        printf("\n");
    }
    getch();
    return 0;
}
