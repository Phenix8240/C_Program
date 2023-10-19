#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    // char a[]="Arghya";
    // char b[]="'A','r','g','h','y','a','\0'";
    // printf("Lenght of string a:%zu\n",strlen(a));
    // printf("Lenght of string b:%zu\n",strlen(b));

    // char str1[20]="Arghya Dey";
    // char str2[20];
    // strcpy(str2,str1);
    // puts(str2);
    
    char a[]="Arghya",b[]="arghya",c[]="Arghya";
    int result;
    result=strcmp(a,b);
    printf("strcmp(a,b)=%d\n",result);
    result=strcmp(a,c);
    printf("strcmp(a,c)=%d\n",result);

    getch();
    return 0;
}