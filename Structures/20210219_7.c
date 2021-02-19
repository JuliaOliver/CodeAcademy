/* Create a struct point makepoint (int x, int y) function that creates two points. */

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct point makepoint(int x, int y){
    struct point point = {x, y};
    return point;
}

int main(void){
    int xA, yA, xB, yB;

    printf("Enter coordinates for point 'a'");
    printf("\nX a = ");
    scanf(" %d", &xA);
    printf("Y a = ");
    scanf(" %d", &yA);

    printf("\nEnter coordinates for point 'b'");
    printf("\nX b = ");
    scanf(" %d", &xB);
    printf("Y b = ");
    scanf(" %d", &yB);

    struct point a = makepoint(xA, yA);
    struct point b = makepoint(xB, yB);

    printf("\nPoint a(%d,%d)\n", a.x, a.y);
    printf("Point b(%d,%d)\n\n", b.x, b.y);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
