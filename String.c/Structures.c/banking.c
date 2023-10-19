#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct New_User {
    int id;
    char full_name[100];
    char branch[50];
    unsigned long long int acc_no;
    double val;
};

void Display_Balance(struct New_User *st, int j) {
    printf("Name: %s\n", st[j].full_name);
    printf("Branch: %s\n", st[j].branch);
    printf("Account Number: %llu\n", st[j].acc_no);
    printf("Available Balance: %.2f $\n", st[j].val);
}

void Deposit_Money(struct New_User *st, int j, double amount) {
    if (amount < 500) {
        printf("Error: Invalid amount. Transfer amount cannot be negative.\n");
        return;  
    }
    printf("Minimum amount you can deposit is 500 $\n");
  
    st[j].val += amount;
    printf("Money deposit successful!\n");
    printf("Name: %s\n", st[j].full_name);
    printf("Branch: %s\n", st[j].branch);
    printf("Account Number: %llu\n", st[j].acc_no);
    printf("Thank you, Mr/Ms %s. %.2f $ deposited to your account.\n", st[j].full_name, amount);
    printf("Your current balance is %.2f $.\n", st[j].val);
}

void Withdraw_Money(struct New_User *st, int j, double amount) {
    if (amount < 500) {
        printf("Error: Invalid amount. Transfer amount cannot be negative.\n");
        return;  
    }
    printf("Minimum amount you can withdraw is 500 $\n");
    if (st[j].val >= amount ) {
        st[j].val -= amount;
        printf("Money withdrawal successful!\n");
        printf("Name: %s\n", st[j].full_name);
        printf("Branch: %s\n", st[j].branch);
        printf("Account Number: %llu\n", st[j].acc_no);
        printf("Thank you, Mr/Ms %s. %.2f $ withdrawn from your account.\n", st[j].full_name, amount);
        printf("Your current balance is %.2f $.\n", st[j].val);
    } else {
        printf("Insufficient balance.\n");
    }
}

void Transfer_Money(struct New_User *st, int senderIndex, int receiverIndex, double amount) {
    if (amount < 500) {
        printf("Error: Invalid amount. Transfer amount cannot be negative.\n");
        return;  
    }
    printf("Minimum amount you can transfer is 500 $\n");
    if (st[senderIndex].val >= amount) {
        st[senderIndex].val -= amount;
        st[receiverIndex].val += amount;
        printf("Money transfer successful!\n");
        printf("Sender Name: %s\n", st[senderIndex].full_name);
        printf("Sender Account Number: %llu\n", st[senderIndex].acc_no);
        printf("Receiver Name: %s\n", st[receiverIndex].full_name);
        printf("Receiver Account Number: %llu\n", st[receiverIndex].acc_no);
        printf("Thank you, Mr/Ms %s. %.2f $ transferred from your account to account number %llu.\n", st[senderIndex].full_name, amount, st[receiverIndex].acc_no);
        printf("Your current balance is %.2f $\n", st[senderIndex].val);
    } else {
        printf("Money transfer failed!\n");
        printf("Insufficient balance for transfer.\n");
    }
}

void Tax_Cut(struct New_User *st, int senderIndex, double amount) {
    double fine = st[senderIndex].val * (1.0 / 500.0);
    st[senderIndex].val -= fine;
    
    printf("You get fined!\n");
    printf("Name: %s\n", st[senderIndex].full_name);
    printf("Branch: %s\n", st[senderIndex].branch);
    printf("Account Number: %llu\n", st[senderIndex].acc_no);
    printf("Thank you, Mr/Ms %s. %.2f$ cut from your account.\n", st[senderIndex].full_name, fine);
    printf("Your current balance is %.2f$.\n", st[senderIndex].val);
}

void Close_Account(struct New_User *st, int index, int *n) {
    struct New_User user = st[index];
    
    if (user.val != 0) {
        printf("Your account balance is not zero.\n");
        printf("1. Withdraw Balance\n");
        printf("2. Transfer Balance to another account\n");
        printf("3. Cancel\n");

        int choice;
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice) {
            case 1:
                printf("Withdrawing balance...\n");
                Withdraw_Money(st, index, user.val);
                break;
            case 2:
                printf("Enter Receiver Account Number: ");
                unsigned long long int receiverAccNo;
                scanf("%llu", &receiverAccNo);
                fflush(stdin);
                int receiverIndex = -1;

                for (int i = 0; i < *n; i++) {
                    if (st[i].acc_no == receiverAccNo) {
                        receiverIndex = i;
                        break;
                    }
                }

                if (receiverIndex != -1) {
                    printf("Transferring balance...\n");
                    Transfer_Money(st, index, receiverIndex, user.val);
                } else {
                    printf("Receiver account not found. Transfer canceled.\n");
                }
                break;
            case 3:
                printf("Account closure canceled.\n");
                return; 
            default:
                printf("Invalid choice. Account closure canceled.\n");
                return; 
        }
    }

    for (int i = index; i < *n - 1; i++) {
        st[i] = st[i + 1];
    }
    (*n)--;
    printf("Account closed successfully!\n");
}

void WhatToDo(struct New_User *st, int n, int x) {
    int choice;
    double amount;
    unsigned long long int userAccNo, senderAccNo;
    int transferAmount;
    int uindex = -1, sindex = -1;
    printf("Welcome, %s!\n", st[n].full_name);
    printf("\nWhat do you want to do?\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Transfer Money\n5. Exit\n6. Close Account\n");

    scanf("%d", &choice);
    fflush(stdin);

    switch (choice) {
        case 1:
            Display_Balance(st, n);
            break;
        case 2:
            printf("Enter amount(Minimum 500 $): ");
            scanf("%lf", &amount);
            fflush(stdin);
            Deposit_Money(st, n, amount);
            break;
        case 3:
            printf("Enter amount(Minimum 500 $): ");
            scanf("%lf", &amount);
            fflush(stdin);
            Withdraw_Money(st, n, amount);
            break;
        case 4:
            printf("Enter Your Account Number: ");
            scanf("%llu", &userAccNo);
            fflush(stdin);
            printf("Enter Sender Account Number: ");
            scanf("%llu", &senderAccNo);
            fflush(stdin);
            printf("Enter transfer amount(Minimum 500 $): ");
            scanf("%d", &transferAmount);
            fflush(stdin);

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
                Tax_Cut(st, uindex, transferAmount);
            }
            break;
        case 5:
            printf("Thank you for using our services. Visit again.\n");
            break;
        case 6:
            printf("Enter Your Account Number: ");
            scanf("%llu", &userAccNo);
            fflush(stdin);

            for (int i = 0; i < x; i++) {
                if (st[i].acc_no == userAccNo) {
                    Close_Account(st, i, &n);
                    return; // Exit the function after closing the account
                }
            }
            printf("Account not found. Please enter a valid account number.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid choice.\n");
    }
}

int main() {
    int n, i;
    unsigned long long int Acc_no;
    printf("....WELCOME TO OUR BANK....\n");
    printf("Enter the number of users to create an Account: ");
    scanf("%d", &n);
    fflush(stdin);

    struct New_User *st = malloc(n * sizeof(struct New_User));
    printf("....Details Information....\n");
    for (i = 0; i < n; i++) {
        printf("ID No: %d\n", i + 1);
        printf("Enter your full name: ");
        scanf("%[^\n]s", st[i].full_name);
        fflush(stdin);
        printf("Enter the branch: ");
        scanf("%[^\n]s", st[i].branch);
        fflush(stdin);
        printf("Enter your account no: ");
        scanf("%llu", &st[i].acc_no);
        fflush(stdin);
        float balance;
        do {
            printf("Enter your balance (minimum $1000): ");
            scanf("%f", &balance);
            fflush(stdin);

            if (balance < 1000) {
                printf("Minimum balance required is $1000. Please enter a higher amount.\n");
            }
        } while (balance < 1000);

        st[i].val = balance;
    }
   printf("\n");
    printf("......TASK AREA......\n");
    printf("Please enter your Account Number: ");
    scanf("%llu", &Acc_no);
    fflush(stdin);
    int f = 0;

    for (i = 0; i < n; i++) {
        if (st[i].acc_no == Acc_no) {
            f = 1;
            break;
        }
    }

    if (f == 0) {
        printf("Invalid account number.\n");
        free(st);
        return 0;
    }

    while (1) {
        WhatToDo(st, i, n);
    }


    free(st); 
    return 0;
}
 