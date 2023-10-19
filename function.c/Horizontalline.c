#include <stdio.h>
#include<conio.h>

// Function to draw a horizontal line at the current cursor position
void drawHorizontalLine()
{
    printf("\n");
    
    // Draw a line of dashes (-)
    for (int i = 0; i < 80; i++)
    {
        printf("-");
    }
    
    printf("\n");
}

int main()
{
    // Call the drawHorizontalLine function
    drawHorizontalLine();
    getch();
    return 0;
}
