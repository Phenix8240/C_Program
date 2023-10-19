#include <stdio.h>
#include <string.h>
#include<conio.h>

// Function to search for a pattern within a given string
int searchPattern( char* string,  char* pattern) {
    int stringLen = strlen(string);
    int patternLen = strlen(pattern);

    // Iterate through the string
    for (int i = 0; i <= stringLen - patternLen; i++) {
        int j;

        // Check if the current substring matches the pattern
        for (j = 0; j < patternLen; j++) {
            if (string[i + j] != pattern[j])
                break;
        }

        // If the pattern is found, return the starting index
        if (j == patternLen)
            return i;
    }

    // Pattern not found
    return -1;
}

int main() {
     char* string = "Hello, how are you?";
     char* pattern = "how";

    int index = searchPattern(string, pattern);

    if (index != -1)
        printf("Pattern found at index %d\n", index);
    else
        printf("Pattern not found\n");
    getch();
    return 0;
}
