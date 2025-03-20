
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Here are the choices:\n 1 - Rock\n 2 - Paper\n 3 - Scissors\n");

    srand(time(0)); 

    while (1) { 
    
        printf("\nEnter your choice (1-3) or 0 to exit: ");
        scanf("%d", &userChoice);

        if (userChoice == 0) {
            printf("Thanks for playing!\n");
            break; 
            
        }
        if (userChoice < 1 || userChoice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            continue;
        }

        computerChoice = rand() % 3 + 1; 

       
        printf("You chose: %s\n", (userChoice == 1) ? "Rock" : (userChoice == 2) ? "Paper" : "Scissors");
       
        printf("Computer chose: %s\n", (computerChoice == 1) ? "Rock" : (computerChoice == 2) ? "Paper" : "Scissors");

        if (userChoice == computerChoice) {
            printf("It's a tie!\n");
        } else if ((userChoice == 1 && computerChoice == 3) || 
                   (userChoice == 2 && computerChoice == 1) || 
                   (userChoice == 3 && computerChoice == 2)) {
           
            printf("Congratulations You win \n");
        } else {
            printf("Sorry, you lost! \n");
        }
    }

    return 0;
}
