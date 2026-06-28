#include <stdio.h>
// Q110) Write a program to Create bank account system.
#define MAX_ACCOUNTS 100

struct Account {
    int acc_no;
    char name[30];
    float balance;
};

int main() {
    struct Account accounts[MAX_ACCOUNTS];
    int total = 0;
    int choice, i, j, acc_no;
    float amount;

    while (1) {
        printf("\n---- BANK ACCOUNT SYSTEM ----\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Delete Account\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // CREATE ACCOUNT
        if (choice == 1) {
            if (total == MAX_ACCOUNTS) {
                printf("Bank database is full!\n");
            } else {
                printf("Enter Account Number: ");
                scanf("%d", &accounts[total].acc_no);

                printf("Enter Account Holder Name: ");
                scanf(" %29[^\n]", accounts[total].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &accounts[total].balance);

                total++;
                printf("Account created successfully!\n");
            }
        }

        // DISPLAY ALL ACCOUNTS
        else if (choice == 2) {
            if (total == 0) {
                printf("No accounts found.\n");
            } else {
                printf("\n--- ACCOUNT DETAILS ---\n");

                for (i = 0; i < total; i++) {
                    printf("A/C No: %d | Name: %s | Balance: %.2f\n",
                           accounts[i].acc_no,
                           accounts[i].name,
                           accounts[i].balance);
                }
            }
        }

        // DEPOSIT MONEY
        else if (choice == 3) {
            printf("Enter Account Number: ");
            scanf("%d", &acc_no);

            for (i = 0; i < total; i++) {
                if (accounts[i].acc_no == acc_no) {
                    printf("Enter Amount to Deposit: ");
                    scanf("%f", &amount);

                    accounts[i].balance += amount;

                    printf("Deposit successful!\n");
                    printf("New Balance: %.2f\n",
                           accounts[i].balance);
                    break;
                }
            }

            if (i == total)
                printf("Account not found.\n");
        }

        // WITHDRAW MONEY
        else if (choice == 4) {
            printf("Enter Account Number: ");
            scanf("%d", &acc_no);

            for (i = 0; i < total; i++) {
                if (accounts[i].acc_no == acc_no) {
                    printf("Enter Amount to Withdraw: ");
                    scanf("%f", &amount);

                    if (amount > accounts[i].balance) {
                        printf("Insufficient Balance!\n");
                    } else {
                        accounts[i].balance -= amount;

                        printf("Withdrawal successful!\n");
                        printf("Remaining Balance: %.2f\n",
                               accounts[i].balance);
                    }
                    break;
                }
            }

            if (i == total)
                printf("Account not found.\n");
        }

        // DELETE ACCOUNT
        else if (choice == 5) {
            printf("Enter Account Number to delete: ");
            scanf("%d", &acc_no);

            for (i = 0; i < total; i++) {
                if (accounts[i].acc_no == acc_no) {
                    for (j = i; j < total - 1; j++) {
                        accounts[j] = accounts[j + 1];
                    }

                    total--;
                    printf("Account deleted successfully!\n");
                    break;
                }
            }

            if (i == total)
                printf("Account not found.\n");
        }

        // EXIT
        else if (choice == 6) {
            printf("Program ended.\n");
            break;
        }

        // INVALID CHOICE
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}