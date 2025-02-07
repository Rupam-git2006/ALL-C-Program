#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));


    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;
    int no_of_guessed = 0;
    int guessed;


    // Print the random number
    // printf("Random Number: %d\n", random_number);


    do{
        printf("guess the number  : ");
        scanf("%d", &guessed);
        if (guessed>random_number)
        {
            printf("Lower number please:\n"); 
        }
        else if (guessed<random_number){
            printf("Higher number please:\n");
        }
        else{
            printf("Congrats!!\n");
        }
        
        no_of_guessed++;
    }while (guessed!=random_number);

    printf("You guessed the number in %d guesses\n", no_of_guessed);
    return 0;
}
