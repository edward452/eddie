#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    const int MIN=1;
     const int MAX =100;
    int number;
    int guess;
    int guesses;
    srand(time(0));

  number=(rand() % MAX) + MIN;
    do
    {
        printf("Enter a guess:");
        scanf("%d",&guess);
        if(guess==number)
        {
            printf("Your answer is correct\n");
        }
        else if(guess< number)
        {
            printf("Guess a higher number\n");
        }
        else if(guess>number)
        {
            printf("Guess a lower number\n");
        }
        guesses++;
    } while (guess != number);
    printf("%d\n",number);
    printf("%d\n",guesses);
    return 0;
      
      
    
}
