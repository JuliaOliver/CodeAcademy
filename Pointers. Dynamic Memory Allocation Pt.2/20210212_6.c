/* Allocate dynamically with malloc memory for char *buffer with size size = 2, 
enter characters from the console with getchar () read them, write them to the buffer. 
Increase the buffer size before it overflows with realloc ().
Stop the loop with Ctrl + Z. Print the buffer and free the memory. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c;
    int count = 0;
    int size = 2;
    char *buffer;

    buffer = malloc(sizeof(char)*size);

    c = getchar();
    while (c != EOF){
        if(count == size - 1){
            size = size * 2;
            buffer = realloc(buffer, size);
        }
        buffer[count++] = c;
        c = getchar();
    }

    buffer[count] = '\0';
    printf("\n%s\n", buffer);

    free(buffer);

    return 0;    
}

/* Depending the entered input, prints the corresponding answer */
