/* Use the if - else if - else construction to print one of 3 possible answers */

#include <stdio.h>

int main(void){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    char choice;
    scanf("%d", &choice);

    if (choice == 1){
        printf("\nHello!\n\n");
    }
    else if (choice == 2){
        printf("\nRoses are Red,\n"
        "Violets are Blue\n"
        "Unexpected '{'\n"
        "on line 32.\n\n");
    }
    else{ // works with everything except 1 and 2, if we want it to work only if we enter 3 should be with else if, not only else
        printf("\nThis is a hidden message\n\n");
    }

    return 0;
}

/* Prints the corresponding answer, to the entered value */
