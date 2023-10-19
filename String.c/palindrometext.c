#include<stdio.h>
#include<string.h>
#include<conio.h>
void Palindrome(char str[]){
    int i=0,j=strlen(str)-1;
    while(j>1){
        if(str[i++]!=str[j--]){
            printf("%s is not palindrome.",str);
            return ;
        }
    }
   printf("%s is palindrome.",str);
}
 int main(){
    char str[100];
    printf("Enter the word:");
    gets(str);
    Palindrome(str);
    getch();
    return 0;
 }