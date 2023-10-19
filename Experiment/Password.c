#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void GeneratePassword(char *Password,int l){
    srand(time(NULL));
    const char charset[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
    int charsetsize=sizeof(charset)-1;
    for(int i=0;i<l;i++){
        int index=rand()%charsetsize;
        Password[i]=charset[index];
    }
    Password[l]='\0';
}
int  VerifyPassword(char *Password,int l){
    int f=0;
    for(int i=0;i<l;i++){
        char ch=Password[i];
        if(('A'<=ch && ch<='Z')||('a'<=ch && ch<='z')||('0'<=ch && ch<='9')||(ch=='!'||ch=='@'||ch=='#'
        ||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*'||ch=='('||ch==')'||ch=='_'||ch=='+')){
            f=1;
        }else{
            f=0;
        }
    }
    if( f==1){
    printf("\nPassword is Strong & Statisfies all Necessary Conditions.");
    }else{
    printf("\nPassword must contain atleast one Uppercase Letter,Lowercase Letter,Symbol,Digit");
    }
}
typedef struct {
    char passwords[20][12];
    int numPasswords;
} PasswordManager;

void savePassword(PasswordManager *manager, const char *password) {
    if (manager->numPasswords < 20) {
        strcpy(manager->passwords[manager->numPasswords], password);
        manager->numPasswords++;
        printf("\nPassword saved Successfully.\n");
    } else {
        printf("\nPassword storage is full.\n");
    }
}
void CheckPassword(const PasswordManager *manager,const char *str) {
    char x[12];
    int f=0,pos=-1;
    for (int i = 0; i < manager->numPasswords; i++) {
        if (strcmp(manager->passwords[i], str) == 0) {
           strcpy(x,manager->passwords[i]);
           pos=i;
            f=1;
            break;
    }
}
if(f){
    printf("\nPassword Found in Database.");
            printf("\nPassword%d: %s\n", pos + 1, x);
}
else{
    printf("\nPassword Not found in Database.");
}
}
int WhatToDo(){
int l,ch;
    PasswordManager manager = { .numPasswords = 0 };
    while(1){
        printf("\n....Password Generator....");
    printf("\n\nLenghth of Password should be(8-12) Characters.\nPassword must contain atleast one Uppercase Letter,Lowercase Letter,Symbol,Digit.\n");
    char Password[13];
    printf("\n1.Generate Password Own\n2.Grenerate by Machine\n3.Generate Multiple Passwords\n4.Verify Password\n5.Save Password in DataBase\n6.Check Your Previous Password\n7.Exit");
    printf("\nEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1: while(1){
               printf("\nEnter Your Password:");
               scanf("%s",Password);
               int len=strlen(Password);
               if(len<8 || len>=12 ){
               printf("\nPassword lenght should be at least 8 characters or less than 12 charactrers: ");
               }
               else{
               printf("\nYour Password:%s",Password);
               VerifyPassword(Password,len);
               printf("\n\n");
               break;
               }
               }
               break;
        case 2:printf("\nEnter the Length of Password:");
               scanf("%d",&l);
               if(l<8 || l>=12 ){
               printf("\nPassword lenght should be at least 8 characters or less than 12 charactrers: ");
               return 0;
               }else{
               GeneratePassword(Password,l);
               printf("Generate Password: %s\n",Password);
               }
               break;
        case 3:printf("\nEnter the Number of Password you want to Generate:");
               int n,i,j;
               scanf("%d",&n);
               for(i=1;i<=n;i++){
                printf("\nEnter the Length of Password %d:",i);
                scanf("%d",&j);
                GeneratePassword(Password,l);
                printf("\nGenerate Password %d: %s\n",i,Password);
                savePassword(&manager, Password);
                printf("\n%s saved in Database.",Password);
               }
        case 4:VerifyPassword(Password,strlen(Password));
               break;
        case 5:if (manager.numPasswords >= 20) {
                    printf("Password storage is full.\n");
                } else {
                    savePassword(&manager, Password);
                }
                break;
        case 6:printf("\nEnter Your Password:");
               char str[12];
               scanf("%s",str);
               CheckPassword(&manager,str);
               break;
        case 7:printf("\nBye!!Exiting The Program!");
               return 0;
        default:printf("\nInvalid option!");
    }
    }
}
int main(){
    WhatToDo();
getch();
return 0;
}