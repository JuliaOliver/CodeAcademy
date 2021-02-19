/* Make an add () function that collects two points. */

#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};


struct point add(struct point a, struct point b){
    struct point c = {a.x + b.x, a.y + b.y};
    return c;
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

    struct point a = {xA, yA};
    struct point b = {xB, yB};

    struct point c = add(a, b);

    printf("\nPoint a(%d,%d)\n", a.x, a.y);
    printf("Point b(%d,%d)\n", b.x, b.y);
    printf("Point c(%d,%d)\n\n", c.x, c.y);
    
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
