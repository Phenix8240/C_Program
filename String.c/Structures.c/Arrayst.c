#include <stdio.h>
#include<conio.h>
#include<string.h>
// typedef struct DOB{
//     int date;
//     int month;
//     int year;
// }date;
// void avg(int maths,int phy,int chem,int eng,int bio){
//     int total=(maths+phy+chem+eng+bio);
//     int avgmarks=total/5;
// printf("%d",avgmarks);
// }
// typedef struct Marks{
//     int maths,phy,chem,eng,bio;
//     int amarks = avg(maths,phy,chem,eng,bio);

// }marks;
// typedef struct Student{
//     int id;
//     char name[50];
//     int age;
//     int rollno;
//    date dob ;
//    marks all;
// }student;

// int main(){
//     int n,i;
//     printf("Enter the no.");
//     scanf("%d",&n);
//      student st[n];
    
//     printf("Enter the Student's details\n");
//     for(i=0;i<n;i++){
        
//         printf("Enter id:\n");
//         scanf("%d",&st[i].id);
//         printf("Name:\n");
//         scanf("%s",&st[i].name);
//         printf("Enter age:\n");
//         scanf("%d",&st[i].age);
//         printf("Rollno:\n");
//         scanf("%d",&st[i].rollno);
//         printf("Enter DOB:\n");
//         scanf("%d %d %d",&st[i].dob.date,&st[i].dob.month,&st[i].dob.year);
//      scanf("%d %d %d %d %d",&st[i].all.maths,&st[i].all.phy,&st[i].all.chem,&st[i].all.eng,&st[i].all.eng);
//     }
//     printf("\nStudents Information List\n");
//     for(i=0;i<n;i++){
//         printf("Name:%s\n",st[i].name);
//         printf("ID No:%d\n",st[i].id);
//         printf("Age:%d\n",st[i].age);
//         printf("Roll No:%d\n",st[i].rollno);
//         printf("DOB:%d.%d.%d\n",st[i].dob.date,st[i].dob.month,st[i].dob.year);
//         printf("AVG:%d",st[i].all.amarks);
//     }
//     getch();
//     return 0;
// }
typedef struct DOB {
    int date;
    int month;
    int year;
} date;

typedef struct Marks {
    int maths, phy, chem, eng, bio;
    int amarks;
} marks;

void avg(int maths, int phy, int chem, int eng, int bio, int *avgmarks) {
    int total = maths + phy + chem + eng + bio;
    *avgmarks = total / 5;
}

typedef struct Student {
    int id;
    char name[50];
    int age;
    int rollno;
    date dob;
    marks all;
} student;

int main() {
    int n, i;
    printf("Enter the no.: ");
    scanf("%d", &n);
    student st[n];

    printf("Enter the students' details:\n");
    for (i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%d", &st[i].id);
        printf("Name: ");    
        scanf("%s",&st[i].name);
        printf("Enter age: ");
        scanf("%d", &st[i].age);
        printf("Rollno: ");
        scanf("%d", &st[i].rollno);
        printf("Enter DOB: ");
        scanf("%d %d %d", &st[i].dob.date, &st[i].dob.month, &st[i].dob.year);

        printf("Enter marks in Maths, Physics, Chemistry, English, and Biology: ");
        scanf("%d %d %d %d %d", &st[i].all.maths, &st[i].all.phy, &st[i].all.chem, &st[i].all.eng, &st[i].all.bio);

        avg(st[i].all.maths, st[i].all.phy, st[i].all.chem, st[i].all.eng, st[i].all.bio, &st[i].all.amarks);
    }

    printf("\nStudents Information List:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", st[i].name);
        printf("ID No: %d\n", st[i].id);
        printf("Age: %d\n", st[i].age);
        printf("Roll No: %d\n", st[i].rollno);
        printf("DOB: %d.%d.%d\n", st[i].dob.date, st[i].dob.month, st[i].dob.year);
        printf("AVG: %d\n", st[i].all.amarks);
    }
getch();
    return 0;
}

/*#include <stdio.h>

// Define a structure to hold bank account details
struct bank_account {
  int account_number;
  char account_holder[100];
  float balance;
};

// Declare an array of bank_account structures
struct bank_account accounts[100];

// Declare a function to display account details
void display_account(int index) {
  printf("Account Number: %d\n", accounts[index].account_number);
  printf("Account Holder: %s\n", accounts[index].account_holder);
  printf("Balance: %.2f\n", accounts[index].balance);
}

// Declare a function to deposit money
void deposit(int index, float amount) {
  accounts[index].balance += amount;
}

// Declare a function to withdraw money
void withdraw(int index, float amount) {
  if (accounts[index].balance >= amount) {
    accounts[index].balance -= amount;
  } else {
    printf("Insufficient balance\n");
  }
}

int main() {
  int num_accounts, account_num, choice, i;
  float amount;

  // Prompt the user for the number of accounts to create
  printf("Enter the number of bank accounts to create: ");
  scanf("%d", &num_accounts);

  // Prompt the user to enter details for each account
  for (i = 0; i < num_accounts; i++) {
    printf("Enter details for account %d:\n", i+1);
    printf("Account Number: ");
    scanf("%d", &accounts[i].account_number);
    printf("Account Holder: ");
    scanf("%s", accounts[i].account_holder);
    printf("Balance: ");
    scanf("%f", &accounts[i].balance);
  }

  // Loop until the user chooses to exit
  while (1) {
    // Prompt the user to select an account and action
    printf("Enter account number: ");
    scanf("%d", &account_num);
    printf("Select an action:\n");
    printf("1. Display Account Details\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    scanf("%d", &choice);

    // Find the index of the selected account
    for (i = 0; i < num_accounts; i++) {
      if (accounts[i].account_number == account_num) {
        break;
      }
    }

    // Perform the selected action
    switch (choice) {
      case 1:
        display_account(i);
        break;
      case 2:
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        deposit(i, amount);
        break;
      case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        withdraw(i, amount);
        break;
      case 4:
        return 0;
      default:
        printf("Invalid choice\n");
        break;
    }
  }
}*/
