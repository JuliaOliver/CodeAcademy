/* Add a second function to the condition in file 20210115_16.c, which calculates
the surface of the ellipse according to two parameters (Pi * A * B) */

#include <stdio.h>

const float constPi = 3.14159;
float circleSurface(float radius);
float ellipseSurface(float a, float b);

int main(void) {
    float firstCircle = circleSurface(1);
    printf("Circle Surface = %f\n", firstCircle);
    float secondCircle = circleSurface(1.5);
    printf("Circle Surface = %f\n", secondCircle);
    float thirdCircle = circleSurface(13);
    printf("Circle Surface = %f\n", thirdCircle);

    float firstEllipse = ellipseSurface(3, 5);
    printf("\nEllipse Surface = %f\n", firstEllipse);
    float secondEllipse = ellipseSurface(4.5, 2);
    printf("Ellipse Surface = %f\n", secondEllipse);
    float thirdEllipse = ellipseSurface(10.5, 6.5);
    printf("Ellipse Surface = %f\n", thirdEllipse);

return 0;
}

float circleSurface(float radius){
    float circle;
    circle = constPi * radius * radius;
    return circle;
}

float ellipseSurface(float a, float b){
    float ellipse;
    ellipse = constPi * a * b;
    return ellipse;
}

/* Prints Circle Surface = 3.141590
          Circle Surface = 7.068578
          Circle Surface = 530.928711

          Ellipse Surface = 47.123852
          Ellipse Surface = 28.274311
          Ellipse Surface = 214.413513 */
