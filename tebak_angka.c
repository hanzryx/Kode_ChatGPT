#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, guess;

    // Generate a random number between 1 and 10
    srand(time(0));
    number = rand() % 10 + 1;

    // Ask the user to guess the number
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    // Check if the guess is correct
    if (guess == number) {
        printf("Congratulations! You guessed the correct number!\n");
    } else {
        printf("Sorry, the correct number was %d\n", number);
    }

    return 0;
}
