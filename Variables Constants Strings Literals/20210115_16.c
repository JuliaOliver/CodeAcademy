/* Define the constant Pi (3.14159 ...) and write a function that calculates 
the circle surface on a given radius (Pi * R * R). In main () call 
the above function with radius: 1, 1.5, 13. */

#include <stdio.h>

const float constPi = 3.14159;
float circleSurface(float radius);

int main(void) {
    float firstCircle = circleSurface(1);
    printf("Circle Surface = %f\n", firstCircle);
    float secondCircle = circleSurface(1.5);
    printf("Circle Surface = %f\n", secondCircle);
    float thirdCircle = circleSurface(13);
    printf("Circle Surface = %f", thirdCircle);

return 0;
}

float circleSurface(float radius){
    float circle;
    circle = constPi * radius * radius;
    return circle;
}

/* Prints Circle Surface = 3.141590
          Circle Surface = 7.068578
          Circle Surface = 530.928711 */
