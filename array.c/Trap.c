#include <stdio.h>
#include<conio.h>

float f(float x) {
    return (1 / (1 + x * x));
}

int main() {
    float s = 0.0f, t, a, b, n;

    printf("Enter the lower limit and upper limit: ");
    // scanf("%f %f", &a, &b);

    printf("Enter the number of intervals: ");
    scanf("%f", &n);

    float h = (b - a) / n;

    for (int i = 1; i <= n - 1; i++) {
        float x = a + i * h;
        s += f(x);
    }

    t = h * ((f(a) + f(b)) / 2 + s);

    printf("Approximate integral: %.2f\n", t);
    getch();
    return 0;
}
