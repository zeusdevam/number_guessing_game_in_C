#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num_input, num, lower_limit, upper_limit, guess = 10;
    printf("\nThis is a number guessing game!");

    printf("\nEnter the lower limit: ");
    scanf("%d", &lower_limit);

    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    srand(time(0));
    num = rand() % upper_limit + lower_limit;

    while (guess > 0)
    {
        guess -= 1;

        printf("\n\nEnter the guess: ");
        scanf("%d", &num_input);

        if (num_input < lower_limit || num_input > upper_limit)
        {
            printf("Invalid Input!");
            break;
        }

        else if (num_input == num)
        {
            printf("\nYou win! You took %d tries!\n\n", 10 - (guess));
            break;
        }
        else if (num_input > num)
        {
            printf("Enter a smaller number\n\n");
        }
        else if (num_input < num)
        {
            printf("Enter a larger number\n\n");
        }

        printf("%d Number of Guesses left", guess);

        if (guess == 0)
        {
            printf("You used all your guesses! You lose! The number was %d", num);
            break;
        }
    }
    return 0;
}
