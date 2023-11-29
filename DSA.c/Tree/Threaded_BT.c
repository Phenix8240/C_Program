#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
    int data;
    struct node *left, *right;
    int isThreaded;
};

struct node *createNode(int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->isThreaded = 0;
    return newNode;
}

void insert(struct node **root, int value) {
    if (*root == NULL) {
        *root = createNode(value);
    } else {
        struct node *temp = *root;
        while (temp) {
            if (value < temp->data) {
                if (!temp->left) {
                    temp->left = createNode(value);
                    temp->left->right = temp;
                    temp->left->isThreaded = 1;
                    return;
                }
                temp = temp->left;
            } else if (value > temp->data) {
                if (temp->isThreaded || !temp->right) {
                    struct node *nextNode = temp->right;
                    temp->right = createNode(value);
                    temp->isThreaded = 0;
                    temp->right->right = nextNode;
                    temp->right->isThreaded = 1;
                    return;
                }
                temp = temp->right;
            } else {
                printf("\nDuplicate values not allowed!");
                return;
            }
        }
    }
}

void inorderTraversal(struct node *root) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return;
    }

    struct node *current = root;
    while (current->left != NULL) {
        current = current->left;
    }

    while (current != NULL) {
        printf("%d ", current->data);
        
        if (current->isThreaded) {
            current = current->right;
        } else {
            if (current->right == NULL) {
                break;
            }
            current = current->right;
            while (current->left != NULL) {
                current = current->left;
            }
        }
    }
}


int main() {
    struct node *root = NULL;
    int value;
    char choice;

    do {
        printf("\nEnter value to insert: ");
        scanf("%d", &value);
        insert(&root, value);
        printf("Do you want to continue inserting? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Inorder Traversal of threaded binary tree: ");
    inorderTraversal(root);
    printf("\n");
    getch();
    return 0;
}
