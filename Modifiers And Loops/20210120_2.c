/* Rewrite the exercise in file 20210120_1.c using the switch-case instead of the if else-if construction. */

#include <stdio.h>

int main(void){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    char choice;
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nHello!\n\n");
            break;
        
        case 2:
            printf("\nRoses are Red,\n"
        "Violets are Blue\n"
        "Unexpected '{'\n"
        "on line 32.\n\n");

            break;
        
        default:
            printf("\nThis is a hidden message\n\n");
            break;
    }

    return 0;
}

/* Prints the corresponding answer, to the entered value */
