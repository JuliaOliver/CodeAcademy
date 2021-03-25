/* Make a global constant pi = 3.14. Write a function that calculates the area of a circle, 
to which we pass the radius as a parameter and return the area of the circle. Use the global 
constant pi to perform the calculations. Call the function in main () and display the result. */

#include <stdio.h>

const float PI = 3.14;
float circleArea(float radius);

int main(void){
    float radius;
    printf("Enter radius of a circle:\n");
    scanf("%f", &radius);
    printf("The area of circle with radius %.2f = %.2f", radius, circleArea(radius));
    return 0;
}

float circleArea(float radius){
    float area = PI * radius * radius;
    return area; /* We can skip one like, and just have expression from line 19 in return */
}

/* Depenting the eneted radius, calculates the area of a circle */
