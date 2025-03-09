#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num, guess;
char i;

int main()
{
    srand(time(0));
    num = rand() % 6 + 1;
    printf("Do you want to play the roulette? 1/0 \n");
    scanf("%c", &i);
    if (i == '1')
    {
//        printf("The num is: %d\n",num);
        printf ("Guess a number between 1 and 6 \n");
        scanf ("%d", &guess);

        if (guess == num)
        {
            printf("You win");
        }
        else
        {
            printf("Goodbye my dude, back to the lobby");
            printf("\nCorrect num was: %d\n", num);
//            system("c:\windows\system32\shutdown /s");
        }
    }
    else
    {
        printf("Quitting the game");
    }
    return 0;
}
