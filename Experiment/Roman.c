#include<stdio.h>
#include<conio.h>
#include<string.h>

void Roman(int n){
    int i;
    int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *c[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    if(n<=0 || n>3999){
        printf("Invalid Number. Roman Numerals are in the range 1-3999\n");
        return;
    }
    printf("Roman representation: ");
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        while(n>=a[i]){
            printf("%s",c[i]);
            n-=a[i];
        }
    }
}

int main(){
    int n;
    printf("Enter the number (1-3999): ");
    scanf("%d", &n);
    Roman(n);
    getch();
    return 0;
}
