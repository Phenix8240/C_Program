#include<stdio.h>
#include<conio.h>
#include<string.h>

//Length of the String
// int main(){
//     char str[100];
//     int i=0,length;
//     printf("Enter the String:");
//     scanf("%s",str);
//     while(str[i]!='\0'){
//         i++;
//         length=i;
//     }
//     printf("Length of the String:%d",length);
//     getch();
//     return 0;
// }

// int main(){
//     char str[200],upper_str[100];
//     int i=0,j=0;
//     printf("Enter the String:");
//     scanf("%s",str);
//     for(i=0,j=0;str[i]!='\0';i++,j++){
// if(str[i]>='a'&& str[i]<='z'){
//             upper_str[j]=str[i]-32;
//         }
//     else{ 
//     upper_str[j]=str[i];
// }
//     }
//     upper_str[j]='\0';
//     printf("%s",upper_str);

// }

// while(str[i]!='\0'){
    
//         if(str[i]>='a'&& str[i]<='z'){
//             upper_str[j]=str[i]-32;
//         }
//     else{ 
//     upper_str[j]=str[i];
// }
// i++,j++;
//     }

// Lower case
// int main(){
//     char str[200],upper_str[100];
//     int i=0,j=0;
//     printf("Enter the String:");
//     scanf("%s",str);
//    while(str[i]!='\0'){
    
//         if(str[i]>='A'&& str[i]<='Z'){
//             upper_str[j]=str[i]+32;
//         }
//     else{ 
//     upper_str[j]=str[i];
// }
// i++,j++;
//     }
    
//     upper_str[j]='\0';
//     printf("%s",upper_str);

// }

//Concatenating
// int main(){
//     char a[100],b[100],c[100];
//     int i=0,j=0;
//     printf("Enter two strings:");
// gets(a);
// gets(b);
// // scanf("%s",a);
// // scanf("%s",b);
//     while(a[i]!='\0'){
//         c[j]=a[i];
//         i++;
//         j++;
//     }
//     i=0;
//     while(b[i]!='\0'){
//       c[j]=b[i];
//       i++;
//       j++;
//     }
//     c[j]='\0';
//     printf("%s",c);
//     getch();
//     return 0;
// }

//Append
// int main(){
//     char dest[100],sorc[100];
//     int i=0,j=0;
//     printf("Enter two strings:");
//     gets(sorc);
//     gets(dest);
//     while(dest[i]!='\0'){
//         i++;
//     }
//     while(sorc[j]!='\0'){
//         dest[i]=sorc[j];
//         i++;
//         j++;
//     }
//     dest[i]='\0';
//     puts(dest);
//     getch();
//     return 0;
// }

//Compare
// int main(){
//      char a[100],b[100];
//      int i,f=0;
//      printf("Enter the 1st string:");
//      gets(a);
//      printf("Enter the 2nd string:");
//      gets(b);
//      for(i=0;a[i]!='\0'&& b[i]!='\0';i++){
//         if(a[i]!=b[i]){
//          f=1;
//         }
//      }
//      if(f==0 && a[i]=='\0' && b[i]=='\0'){
//         printf("The Strings are equal\n");
//      }
//      else{
//         printf("The Strings are not equal\n");
//      }
//     getch();
//     return 0;
//    }

   //Reverse
//    int main(){
//     char a[100];
//     int i,j,l;
//     printf("Enter the String:");
//     gets(a);
//     for(l=0;a[l]!='\0';l++){
//         for(i=0,j=l-1;i<j;i++,j--){
//             char t=a[i];
//             a[i]=a[j];
//             a[j]= t;
//         }
//     }
//     printf("The reverse string:");
//     puts(a);
//     getch();
//     return 0;
//    } 

//Extract from first
// int main(){
//     char str[100],sub_str[100];
//     int n,i;
//     printf("Enter a string:");
//     gets(str);
//     printf("Enter the no. of characters you want to extract:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//     sub_str[i]=str[i];
//     }
//     sub_str[i]='\0';
//     printf("The substring is:\n");
//     puts(sub_str);
//     getch();
//     return 0;
// }

// int main(){
//     char str[100],sub_str[100];
//     int n,i;
//     printf("Enter a string:");
//     gets(str);
//     printf("Enter the no. of characters you want to extract:");
//     scanf("%d",&n);

//     for(i=strlen(str);i>0;i--){
//     sub_str[i]=str[i];
//     }
//     sub_str[i]='\0';
//     printf("The substring is:\n");
//     puts(sub_str);
//     getch();
//     return 0;
// }


