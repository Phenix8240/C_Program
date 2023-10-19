#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0,i;
    printf("Enter the String:");
    gets(str);
    for(i=0;i<strlen(str);i++){
        switch(str[i]){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            count++;
            break;
        }
    }
printf("%d vowles present in the sentence:",count);
}