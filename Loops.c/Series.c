#include<stdio.h>
#include<math.h>
#include<conio.h>
float series(int n){
if(n==1)
return 2.0/3;
else
return (2.0*n)/((2*n-1)*(2*n+1))+series(n-1);
}
int main() {
    int n, i;
    float s = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        s += (2.0 * i) / ((2 * i - 1) * (2 * i + 1));
    }
    // float s=series(n);
    printf("Sum of the series 2/1.3 + 4/3.5 + 6/5.7 + ... = %f", s);
    getch();
    return 0;
}
