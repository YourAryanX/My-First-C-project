#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;


    int guss ;
    int no_of_guss = 0 ;

    printf("You have to think the number between 1 to 100 \n");

    do
    {
        printf("guss the number: ");
        scanf("%d", &guss);

        if (guss < randomNumber)
        {
           printf("think higher  \n");
        }
        else if(guss > randomNumber)

    {
        printf("think lower  \n");

    }
     no_of_guss++ ;

     

       
        



    } while (guss != randomNumber);
    
   
    printf("you gussed the number!!!!!\n");
    
    printf("no of guss is: %d \n", no_of_guss);
     printf("your score is: %d ", no_of_guss * 21 );

    return 0;
}

