#include <stdio.h>

int calculateFactorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isKrishnamurti(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += calculateFactorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Krishnamurti numbers within the range %d:\n", n);

    for (int j = 1; j <= n; j++) {
        if (isKrishnamurti(j)) {
            printf("%d ", j);
        }
    }

    return 0;
}
