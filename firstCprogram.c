#include <stdio.h>
#include<conio.h>

// int main(){
//    int a=2,b=2;
//    if(a>b)
//    printf("a is greater than b");
//    else if(b>a)
//    printf("b is greater than a");
//    else
//    printf("Both are equal");
//     getch();
//     return 0;
// }



int main() {
    int n, i;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / ((2 * i - 1) * (2 * i + 1));
    }
    
    printf("Sum of the series 2/1.3 + 4/3.5 + 6/5.7 + ... = %f", sum);
    getch();
    return 0;
}

// int main()
// {
//     int i, j, n;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     for(i=n; i>=1; i--)
//     {
//       for(j=1;j<=n-i;j++)
//        printf(" ");
//         for(j=i;j>=1;j--)
//         {
      
//             printf("%d",j);
//         }
//         printf("\n");
       
//     }
//    getch();
//     return 0;
// }