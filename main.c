#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>

//Requirements

    //A program to generate a random number from 0 to 20.

    //After generating the number, the program asks the user to guess the generated number.

    //The user should only be able to enter numbers from 0-20

    //The program should indicate to the user if each guess is too high or too low.

    //The player wins the game if they can guess the number withing five tries.



int main()
{
    time_t t;
    int guessedNumber;
    bool thePlayerWins = false;
    int guessesNumber = 0;

    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    printf("%d\n", randomNumber);

    while (thePlayerWins == false)
    {
        printf("Please, enter a number.\n");
        scanf("%d", &guessedNumber);

        if(guessedNumber == randomNumber)
        {
            printf("You guessed it, you won!");
            break;
        }

        if(guessedNumber > 20)
        {
            if(guessesNumber < 5)
            {
                printf("Too high!\n");
                ++guessesNumber;
            }
        }

        if(guessedNumber < 0)
        {
            if(guessesNumber < 5)
            {
                printf("Too low!\n");
                ++guessesNumber;
            }
        }

        if(guessesNumber >= 5)
        {
            printf("You lose!\n");
            break;
        }

    }

    return 0;
}
