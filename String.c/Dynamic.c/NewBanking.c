#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
struct New_User {
    int id;
    char name[50];
    char branch[50];
    int acc_no;
    int val;
};

void Display_Balance(struct New_User st[], int j) {
    printf("Name: %s\n", st[j].name);
    printf("Branch: %s\n", st[j].branch);
    printf("Account Number: %d\n", st[j].acc_no);
    printf("Available Balance: %d$\n", st[j].val);
}

void Deposit_Money(struct New_User st[], int j, int amount) {
    st[j].val += amount;
    printf("Money deposit successful!\n");
    printf("Name: %s\n", st[j].name);
    printf("Branch: %s\n", st[j].branch);
    printf("Account Number: %d\n", st[j].acc_no);
    printf("Thank You, Mr/Ms %s. %d$ deposited to your account.\n", st[j].name, amount);
    printf("Your current balance is %d$.\n", st[j].val);
}

void Withdraw_Money(struct New_User st[], int j, int amount) {
    if (st[j].val >= amount) {
        st[j].val -= amount;
        printf("Money withdrawal successful!\n");
        printf("Name: %s\n", st[j].name);
        printf("Branch: %s\n", st[j].branch);
        printf("Account Number: %d\n", st[j].acc_no);
        printf("Thank You, Mr/Ms %s. %d$ withdrawn from your account.\n", st[j].name, amount);
        printf("Your current balance is %d$.\n", st[j].val);
    } else {
        printf("Insufficient balance.\n");
    }
}

void Transfer_Money(struct New_User st[], int senderIndex, int receiverIndex, int amount) {
    if (st[senderIndex].val >= amount) {
        st[senderIndex].val -= amount;
        st[receiverIndex].val += amount;
        printf("Money transfer successful!\n");
        printf("Sender Name: %s\n", st[senderIndex].name);
        printf("Sender Account Number: %d\n", st[senderIndex].acc_no);
        printf("Receiver Name: %s\n", st[receiverIndex].name);
        printf("Receiver Account Number: %d\n", st[receiverIndex].acc_no);
        printf("Thank You, Mr/Ms %s. %d$ transferred from your account to account number %d.\n", st[senderIndex].name, amount, st[receiverIndex].acc_no);
        printf("Your current balance is %d$.\n", st[senderIndex].val);
    } else {
        printf("Money transfer failed!\n");
        printf("Insufficient balance for transfer.\n");
    }
}

void WhatToDo(struct New_User st[], int n, int x) {
    int choice, amount;
    int userAccNo, senderAccNo, transferAmount;
    int uindex = -1, sindex = -1;

    printf("\nWhat do you want to do?\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Transfer Money\n5. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            Display_Balance(st, n);
            break;
        case 2:
            printf("Enter amount: ");
            scanf("%d", &amount);
            Deposit_Money(st, n, amount);
            break;
        case 3:
            printf("Enter amount: ");
            scanf("%d", &amount);
            Withdraw_Money(st, n, amount);
            break;
        case 4:
            printf("Enter Your Account Number: ");
            scanf("%d", &userAccNo);
            printf("Enter Sender Account Number: ");
            scanf("%d", &senderAccNo);
            printf("Enter transfer amount: ");
            scanf("%d", &transferAmount);

            for (int i = 0; i < x; i++) {
                if (st[i].acc_no == userAccNo) {
                    uindex = i;
                }
                if (st[i].acc_no == senderAccNo) {
                    sindex = i;
                }
            }

            if (uindex != -1 && sindex != -1) {
                Transfer_Money(st, uindex, sindex, transferAmount);
            } else {
                printf("Invalid sender or receiver account number.\n");
            }
            break;
        case 5:
            printf("Thank you for using our services. Visit again.\n");
            exit(0);
        default:
            printf("Invalid choice.\n");
    }
}

int main() {
    int n, i, Acc_no;

    printf("Enter the number of users: ");
    scanf("%d", &n);

    struct New_User *st = malloc(n * sizeof(struct New_User));
    if (st == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        printf("ID No:%d\n", i + 1);
        printf("Enter your name: ");
        scanf("%s", st[i].name);
        printf("Enter the branch: ");
        scanf("%s", st[i].branch);
        printf("Enter your account no: ");
        scanf("%d", &st[i].acc_no);
        printf("Enter your balance: ");
        scanf("%d", &st[i].val);
    }

    while (1) {
        printf("Enter your account number: ");
        scanf("%d", &Acc_no);
        int f = 0;

        for (i = 0; i < n; i++) {
            if (st[i].acc_no == Acc_no) {
                WhatToDo(st, i, n);
                f = 1;
                break;
            }
        }

        if (f == 0) {
            printf("Invalid account number.\n");
        }
    }

    free(st);
    getch();
    return 0;
}
