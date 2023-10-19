#include<stdio.h>
#include<conio.h>
int fib(int n); 
//fibonacci series
int fib(int n){
    if(n>=1)
    return fib(n-1)+fib(n-2);
    else
    return 1;
}
int main(){
    int n,i;
    printf("Enter the no.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf(" %d ",fib(i));
    }
    getch();
    return 0;
}

//Factorial of Number
long int fact(int n){
    if(n>=1) 
    return n*fact(n-1);
    else
    return 1;
}
int main(){
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    // printf("%d",fib(n));
    printf("%ld",fact(n));
    getch();
    return 0;
}

//Power

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent > 0) {
        return base * power(base, exponent - 1);
    }
    else {
        return 1 / (base * power(base, -exponent));
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("Result: %.2f\n", result);
    getch();
    return 0;
}
