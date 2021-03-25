/* Write a program that reads a message, then it
print in reverse order:
Enter a message: I am Miro.
Reversal is: .oriM ma I
Use getchar () to take the characters from the console, 
save them in an array of charms, stop reading until \n.
Use a pointer to point to the current position of the array. 
Use it to print the array in reverse order. */

#include <stdio.h>

int main(void){
    char letter;
    letter = getchar();
    char array[20];
    int i = 0;
    int length = 0;

    while (letter != '\n'){
        array[i] = letter;
        length += 1;
        
        i++;
        letter = getchar();
    }
    
    char *poiner = &array[length];

    while (length > 0){
        poiner -= 1;
        printf("%c\n", (*poiner));
        length -= 1;
    }
    

    return 0;
}

/* Prints the entered text reversed and each element on a new line */
