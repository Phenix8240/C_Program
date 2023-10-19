#include<stdio.h>
#include<conio.h>
#include<string.h>
// int main(){
//    // Shallow Copy
// char s1[]="Arghya";
// char *s2=s1;
// s1[0]='a';
// printf("%s\n",s1);
// printf("%s",s2);

// //Deep Copy
// char *a="Delta";
// char *b;
// b=a;
// b="Alfha";
// printf("%s\n",a);
// printf("%s",b);
// getch();
// return 0;
// }

//size of string by pointer
// int main(){
//     char a[50];
//     gets(a);
//     char *ptr=a;
//     int k=0;
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//          k++;
//     }
    
//     printf("\nSize:%d",k);
//     getch();
//     return 0;
// }

// reverse of a string
int main(){
    char a[50];
    gets(a);
    //char *ptr=a;
    int k=0;
    while(a[k]!='\0'){
        printf("%c",a[k]);
    
         k++;
    }
    printf("\n");
    for(int i=0,j=k-1;i<=j;i++,j--){
        char t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    puts(a);
    printf("\nSize:%d",k);
    getch();
    return 0;
}
