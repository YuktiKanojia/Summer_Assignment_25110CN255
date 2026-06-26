#include <stdio.h>
// Q104) Write a program to Create quiz application.

int main() {
    int answer, score = 0;

    printf("===== QUIZ =====\n");

    // Question 1
    printf("\nQ1. Which metal is liquid at room temperature?\n");
    printf("1. Mercury\n2. Iron\n3. Copper\n4. Aluminium\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 2
    printf("\nQ2. Which planet has the largest number of moons?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\nQ3. What is the speed of light in vacuum?\n");
    printf("1. 3 x 10^8 m/s\n2. 3 x 10^6 m/s\n3. 3 x 10^5 m/s\n4. 3 x 10^3 m/s\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 4
    printf("\nQ4. Which gas is used in electric bulbs?\n");
    printf("1. Oxygen\n2. Nitrogen\n3. Argon\n4. Carbon Dioxide\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 5
    printf("\nQ5. Which law states that every action has an equal and opposite reaction?\n");
    printf("1. First Law\n2. Second Law\n3. Third Law\n4. Law of Gravitation\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}