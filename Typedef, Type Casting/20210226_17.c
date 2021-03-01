/* Which is better to buy: A number of melons of diameter melon with a diameter 
of X centimeters and a thickness of the bark D centimeters or B the number of 
watermelons with a diameter of Y centimeters and the same thickness of the bark D2? 
Create a watermelon structure with two elements - diameter and peel thickness, 
dynamically set aside with malloc () for an array of A number of melons of watermelon 
variety and fill in the data for diameter between 15 and 140 cm with the function rand (), 
for each watermelon in the array and bark thickness between 0.5 and 3.5 cm. Create a 
watermelon structure with two elements - diameter and bark thickness dynamically set 
aside with malloc () for an array of B number of watermelons of the pumpkin variety 
and fill in the diameter data between 35 and 95 cm with the function rand (), for each
watermelon in the array and the thickness of the rind between 0.3 and 0.9 cm. Find the 
average size of the watermelon and the average thickness of the rind and compare them 
with those of the second array. Display the pile of which variety is better to buy. 
Exit: It is better to buy ... watermelons with a diameter of ... cm and a bark with a 
thickness of D cm instead of ... watermelons with a diameter of ... cm and a peel thickness of D1 cm. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 5
#define B 10
typedef struct
{
    int diameter;
    float width;
} watermelon;
float randomFloat(float low, float high)
{
    time_t t = 100;
    srand((unsigned int)(time(&t))); 
    float random = ((float)rand()) / (float)RAND_MAX;
    float diff = high - low;
    float r = random * diff;
    return low + r;
}
void fillArrLemon(watermelon *ptr)
{
    int i = 0;
    float low = 0.5;
    float high = 3.5;
    time_t t = 100;
    srand((unsigned int)(time(&t))); 
    for (i = 0; i < A; i++)
    {
        (ptr + i)->diameter = (rand() % (140 - 15 + 1)) + 15;
        (ptr + i)->width = randomFloat(low, high);
    }
}
void fillArrPumpkin(watermelon *ptr_pumpkin)
{
    int i = 0;
    float low = 0.3;
    float high = 0.9;
    time_t t = 100;
    srand((unsigned int)(time(&t))); 
    for (i = 0; i < B; i++)
    {
        (ptr_pumpkin + i)->diameter = (rand() % (95 - 35 + 1)) + 35;
        (ptr_pumpkin + i)->width = randomFloat(low, high);
    }
}
void compare(watermelon *ptr_melon, watermelon *ptr_pumpkin)
{
    int i = 0;
    int avg_diameter_melon, avg_diameter_pumpkin;
    float avg_width_melon, avg_width_pumpkin;
    for (i = 0; i < A; i++)
    {
        avg_diameter_melon += (ptr_melon + i)->diameter;
        avg_width_melon += (ptr_melon + i)->width;
    }
    for (i = 0; i < B; i++)
    {
        avg_diameter_pumpkin += (ptr_pumpkin + i)->diameter;
        avg_width_pumpkin += (ptr_pumpkin + i)->width;
    }
    avg_diameter_melon = avg_diameter_melon / A;
    avg_width_melon = avg_width_melon / A;
    avg_diameter_pumpkin = avg_diameter_pumpkin / B;
    avg_width_pumpkin = avg_width_pumpkin / B;

    if (avg_diameter_melon > avg_diameter_pumpkin || avg_width_melon > avg_width_pumpkin)
    {
        printf("Better buy %d waterlemon sort melon with diameter %d sm and width %.2f sm instead %d waterlemon"
               " with diameter %d sm and width %.2f sm. \n",
               A, avg_diameter_melon, avg_width_melon, B, avg_diameter_pumpkin, avg_width_pumpkin);
    }
    else
    {
        printf("Better buy %d waterlemon sort pumpkin with diameter %d sm and width %.2f sm instead %d waterlemon"
               " with diameter %d sm and width %.2f sm. \n",
               B, avg_diameter_pumpkin, avg_width_pumpkin, A, avg_diameter_melon, avg_width_melon);
    }
}
int main(void)
{
    watermelon *ptr_melon;
    ptr_melon = (watermelon *)malloc(A * sizeof(watermelon));
    fillArrLemon(ptr_melon);
    watermelon *ptr_pumpkin;
    ptr_pumpkin = (watermelon *)malloc(B * sizeof(watermelon));
    fillArrPumpkin(ptr_pumpkin);
    compare(ptr_melon, ptr_pumpkin);
    free(ptr_melon);
    free(ptr_pumpkin);
    return 0;
}
