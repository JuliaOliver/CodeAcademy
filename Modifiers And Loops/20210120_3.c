/* Rewrite the exercise in file 20210120_2.c using the switch-case instead of the if else-if construction. */

#include <stdio.h>

int main(void){
    printf("Press 1 to see message Hello\nPress 2 to see Poem\nPress 3 to see hidden message\nPress 4 to exit!\n");

    char choice;
    

    while (choice != 4){
        scanf("%d", &choice);
        switch (choice)
    {
        case 1:
            printf("\nHello!\n\n");
            printf("Press 1 to see message Hello\nPress 2 to see Poem\nPress 3 to see hidden message\nPress 4 to exit!\n");

            break;
        
        case 2:
            printf("\nRoses are Red,\n"
            "Violets are Blue\n"
            "Unexpected '{'\n"
            "on line 32.\n\n");
            printf("Press 1 to see message Hello\nPress 2 to see Poem\nPress 3 to see hidden message\nPress 4 to exit!\n");

            break;
        
        default:
            printf("\nThis is a hidden message\n\n");
            printf("Press 1 to see message Hello\nPress 2 to see Poem\nPress 3 to see hidden message\nPress 4 to exit!\n");

            break;
        }
    }
    

    return 0;
}

/* Prints the corresponding answer, to the entered value and asks 
for input command until the user enters 4, then the program ends. */
