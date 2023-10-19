#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct node {
    int num;
    struct node *l, *r;
};

void Insert(struct node **ptr, int item) {
    struct node *curr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (!temp) {
        printf("\nInsufficient Memory!");
        return;
    } 
    temp->num = item;
    temp->l = temp->r = NULL;
    if (*ptr == NULL) {
        *ptr = temp;
        return;
    }
    curr = *ptr;
    while (1) {
        if (curr->num > item) {
            if (curr->l != NULL)
                curr = curr->l;

            else {
                curr->l = temp;
                return;
            }
        } else if (item > curr->num) {
            if (curr->r != NULL)
                curr = curr->r;
            else {
                curr->r = temp;
                return;
            }
        } else {
            free(temp);
            return;
        }
    }
}

void Deletion(struct node **p, int item) {
    struct node *prev, *cur, *suc, *fuscc;
    prev = cur = *p;
    while (cur != NULL) {
        if (cur->num == item)
            break;
        prev = cur;
        if (cur->num > item)
            cur = cur->l;
        else
            cur = cur->r;
    }
    if (!cur) {
        printf("\nTree is Empty!");
        return;
    }
    if (!cur->l && !cur->r) {
        if (prev == cur) {
            free(cur);
            *p = NULL;
        } else {
            if (prev->r == cur)
                prev->r = NULL;
            else
                prev->l = NULL;
            free(cur);
        }
    } else if (cur->l != NULL && cur->r != NULL) {
        fuscc = suc = cur->r;
        while (suc->l != NULL) {
            fuscc = suc;
            suc = suc->l;
        }
        cur->num = suc->num;
        if (fuscc == suc)
            cur->r = suc->r;
        else
            fuscc->l = suc->r;
        free(suc);
    } else if (prev == cur) {
        if (cur->l != NULL)
            *p = cur->l;
        else
            *p = cur->r;
        free(cur);
    } else {
        if (prev->l == cur) {
            if (cur->l != NULL)
                prev->l = cur->l;
            else
                prev->l = cur->r;
        } else {
            if (cur->l != NULL)
                prev->r = cur->l;
            else
                prev->r = cur->r;
        }
        free(cur);
    }
}

void InorderTrav(struct node *root) {
    if (root != NULL) {
        InorderTrav(root->l);
        printf("%d ", root->num);
        InorderTrav(root->r);
    }
}

void PreorderTarv(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->num);
        PreorderTarv(root->l);
        PreorderTarv(root->r);
    }
}

void PostorderTrav(struct node *root) {
    if (root != NULL) {
        PostorderTrav(root->l);
        PostorderTrav(root->r);
        printf("%d ", root->num);
    }
}

int FindSmallest(struct node *root) {
    if (root == NULL) {
        printf("\nTree is Empty!");
        return -1;
    }

    while (root->l != NULL) {
        root = root->l;
    }

    return root->num;
}

int FindLargest(struct node *root) {
    if (root == NULL) {
        printf("\nTree is Empty!");
        return -1;
    }

    while (root->r != NULL) {
        root = root->r;
    }

    return root->num;
}

struct node *mirrorimage(struct node *tree) {
    if (tree != NULL) {
        mirrorimage(tree->l);
        mirrorimage(tree->r);
        struct node *temp = tree->l;
        tree->l = tree->r;
        tree->r = temp;
    }
    return tree;
}

struct node *duplicateTree(struct node *root) {
    if (root == NULL) {
        return NULL;
    }

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->num = root->num;
    newNode->l = duplicateTree(root->l);
    newNode->r = duplicateTree(root->r);

    return newNode;
}

struct node *createMirrorImage(struct node *root) {
   
    struct node *mirror = duplicateTree(root);

    return mirrorimage(mirror);
}

 
struct node *restoreOriginalTree(struct node *mirror) {
    // The restored tree is the mirror image of the mirror image
    return createMirrorImage(mirror);
}

void FreeTree(struct node *root) {
    if (root != NULL) {
        FreeTree(root->l);
        FreeTree(root->r);
        free(root);
    }
}
int main() {
    struct node *root = NULL;

    
    int i, n, a;
    printf("\nEnter the Number of Elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d:", i + 1);
        scanf("%d", &a);
        Insert(&root, a);
    }

    printf("\nOriginal BST In-order Traversal:");
    InorderTrav(root);

    struct node *mirror = createMirrorImage(root);

    printf("\nMirror Image BST In-order Traversal:");
    InorderTrav(mirror);

   
    struct node *restoredTree = restoreOriginalTree(mirror);

    printf("\nRestored BST In-order Traversal:");
    InorderTrav(restoredTree);

    FreeTree(root);
    FreeTree(mirror);
    FreeTree(restoredTree);

    getch();
    return 0;
}
