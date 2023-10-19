#include <stdio.h>
#include <conio.h>

int leapyear(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    int l = leapyear(year);

    if (l == 1) {
        printf("Yes, it's a leap year.\n");
    } else {
        printf("No, it's not a leap year.\n");
    }

    return 0;
}
