#include <stdio.h>
#include <math.h>
#include<conio.h>

void Decimal(long int n) {
    int d = 0, i = 0, r;
    while (n != 0) {
        r = n % 10;
        n /= 10;
        d += r * pow(2, i++);
    }
    printf("Decimal No: %d\n", d);
}

void Binary(long int n) {
    long int b = 0;
    int i = 1, r;
    while (n != 0) {
        r = n % 2;
        b += r * i;
        i *= 10;
        n /= 2;
    }
    printf("Binary No: %ld\n", b);
}

int main() {
    long int n;
    int m;
    printf("Enter the number: ");
    scanf("%ld", &n);
    printf("Enter your choice (1 for Binary, 2 for Decimal): ");
    scanf("%d", &m);

    switch (m) {
        case 1:
            Binary(n);
            break;
        case 2:
            Decimal(n);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
    getch();
    return 0;
}
