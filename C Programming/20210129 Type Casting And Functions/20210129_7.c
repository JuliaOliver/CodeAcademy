/* Write a program in C that contains 2 functions.
1. The first considers the area of a right triangle.
2. The second uses the area of the triangle to calculate the area of
a quadrilateral with the same lengths on the sides as the shoulders of the triangle.
Write the prototypes of the functions at the top and their bodies below
main function */

#include <stdio.h>

float triangleArea(float a, float b);
float rectangleArea(float result);

int main(){
    float a, b, result;
    printf("Enter a value for the first arm of the right triangle\na: ");
    scanf("%f", &a);

    printf("Enter a value for the second arm of the right triangle\nb: ");
    scanf("%f", &b);

    result = triangleArea(a, b);

    printf("The area of your right triangle is: %.2f\nThe area of a rectangle with the same sides is: %.2f", result, rectangleArea(result));

    return 0;
}

float triangleArea(float a, float b){
    float areaOfTriangle;
    areaOfTriangle = a * b / 2;
    return areaOfTriangle;
}

float rectangleArea(float result){
    float areaOfARectangle;
    areaOfARectangle = result * 2;
    return areaOfARectangle;
}

/* Depending the entered input, prints the corresponding answer */
