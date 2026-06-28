#include <stdio.h>
// Q111) Write a program to Create ticket booking system.
#define MAX_TICKETS 100

struct Ticket {
    int ticket_no;
    char name[30];
    int seats;
};

int main() {
    struct Ticket tickets[MAX_TICKETS];
    int total = 0;
    int choice, i, j, ticket_no;

    while (1) {
        printf("\n---- TICKET BOOKING SYSTEM ----\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Booking\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // BOOK TICKET
        if (choice == 1) {
            if (total == MAX_TICKETS) {
                printf("No more bookings can be made!\n");
            } else {
                printf("Enter Ticket Number: ");
                scanf("%d", &tickets[total].ticket_no);

                printf("Enter Passenger Name: ");
                scanf(" %29[^\n]", tickets[total].name);

                printf("Enter Number of Seats: ");
                scanf("%d", &tickets[total].seats);

                total++;
                printf("Ticket booked successfully!\n");
            }
        }

        // DISPLAY ALL BOOKINGS
        else if (choice == 2) {
            if (total == 0) {
                printf("No bookings found.\n");
            } else {
                printf("\n--- ALL BOOKINGS ---\n");

                for (i = 0; i < total; i++) {
                    printf("Ticket No: %d | Name: %s | Seats: %d\n",
                           tickets[i].ticket_no,
                           tickets[i].name,
                           tickets[i].seats);
                }
            }
        }

        // SEARCH BOOKING
        else if (choice == 3) {
            printf("Enter Ticket Number: ");
            scanf("%d", &ticket_no);

            for (i = 0; i < total; i++) {
                if (tickets[i].ticket_no == ticket_no) {
                    printf("\nBooking Found!\n");
                    printf("Ticket No: %d\n", tickets[i].ticket_no);
                    printf("Passenger Name: %s\n", tickets[i].name);
                    printf("Seats Booked: %d\n", tickets[i].seats);
                    break;
                }
            }

            if (i == total)
                printf("Booking not found.\n");
        }

        // CANCEL BOOKING
        else if (choice == 4) {
            printf("Enter Ticket Number to cancel: ");
            scanf("%d", &ticket_no);

            for (i = 0; i < total; i++) {
                if (tickets[i].ticket_no == ticket_no) {
                    for (j = i; j < total - 1; j++) {
                        tickets[j] = tickets[j + 1];
                    }

                    total--;
                    printf("Booking cancelled successfully!\n");
                    break;
                }
            }

            if (i == total)
                printf("Booking not found.\n");
        }

        // EXIT
        else if (choice == 5) {
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