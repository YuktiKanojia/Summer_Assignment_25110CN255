#include <stdio.h>
// Q101) Write a program to Create number guessing game.
int main() {
    int num = 29;   // Number to guess
    int guess;

    printf("Guess the number (between 1 and 50): ");
    scanf("%d", &guess);
    
    if (guess == num) {
        printf("Congratulations! You guessed the correct number.\n");
    }
    else if (guess < num) {
        printf("Too low! The correct number was %d.\n", num);
    }
    else {
        printf("Too high! The correct number was %d.\n", num);
    }
    
    return 0;
}