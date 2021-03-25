/* Make a struct rect structure that contains two points. Create an object 
of this structure called screen. Use the makepoint function to set the start point 
on the screen (0, 0) and the end point (15, 15). Fill the space between them with dashes. */

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point a;
    struct point b;
};


int main(void){
    struct point a = {0, 0};
    struct point b = {15, 15};

    struct rect screen = {a, b};

    char screenMatrix[b.x][b.y];

    for (int i = screen.a.x; i < screen.b.x; i++){
        for (int j = screen.a.y; j < screen.b.y; j++)
        {
            screenMatrix[i][j] = '-';
            printf(" %c ", screenMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Prints
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  */
