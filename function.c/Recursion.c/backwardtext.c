#include <stdio.h>
#include<conio.h>


void printStringBackward( char* str)
{
    if (*str == '\0') {
        return;  
    } else {
        printStringBackward(str + 1);  
        printf("%c", *str);  
    }
}

int main()
{
     char* text = "Hello, World!";
    
    printf("Original Text: %s\n", text);
    printf("Text Backward: ");
    printStringBackward(text);
    getch();
    return 0;
}
