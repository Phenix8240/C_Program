#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
 
struct course {
    int marks;
    char sub[30];
};

int main() {
    struct course* ptr;
    int noOfRecords;

    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);

    ptr = (struct course*)malloc(noOfRecords * sizeof(struct course));

    for (int i = 0; i < noOfRecords; i++) {
        printf("Enter subject and marks: ");
        scanf("%s %d", (ptr + i)->sub, &(ptr + i)->marks);
    }

    printf("Information List\n");
    for (int i = 0; i < noOfRecords; i++) {
        printf("%s: %d\n", (ptr + i)->sub, (ptr + i)->marks);
    }

    free(ptr);
    getch();
    return 0;
}
