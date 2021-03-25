/* Write an area () function without parameters. Ask the user to enter the radius using the functions:
printf ("Enter a radius \ n");
scanf ("% lf", & r);
Use the function from file 20210129_1.c to calculate the area of a circle with the entered radius and return the result: */

#include <stdio.h>

const float PI = 3.14;
float circleSurface(float radius);
float area();

int main(void){
    printf("Enter radius of a circle:\n");
    area();
    return 0;
}

float circleSurface(float radius){
    float surface = PI * radius * radius;
    printf("The surface of circle with radius %.2f = %.2f", radius, surface);
}

float area(){
    float radius;
    scanf("%f", &radius);
    return circleSurface(radius);
}

/* Depenting the eneted radius, calculates the area of a circle */
