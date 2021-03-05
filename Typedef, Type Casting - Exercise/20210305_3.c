/* As the altitude increases, the temperature decreases by about 0.5ºC every 100m. 
Let's assume that the atmospheric pressure is normal. If we know the temperature (XºC) 
of Vihren hut (1950 meters above sea level), calculate the temperature of Vihren peak 
(2918 meters above sea level). If the temperature (UºC) of Vihren peak is known, 
calculate the temperature of Vihren hut. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    float temperature;
    int height;
} peak;
int main()
{
    peak *vihrenPeak = (peak *)malloc(sizeof(peak));
    peak *vihrenLodge = (peak *)malloc(sizeof(peak));
    vihrenLodge->height = 1950;
    vihrenPeak->height = 2918;
    int choise;

    printf("Which temperature do you know?\nPress 1 for the peak\nPress 2 for the lodge\n");
    scanf("%d", &choise);
    if (choise == 1)
    {
        printf("What is the temperature of the peak?: ");
        scanf("%f", &vihrenPeak->temperature);
    }
    else
    {
        printf("What is the temperature of the lodge?: ");
        scanf("%f", &vihrenLodge->temperature);
    }

    int difference = vihrenLodge->height - vihrenPeak->height;
    float temperaturedifference = (difference / 100) * 0.5;
    if (choise == 1)
    {
        printf("The temperature on the peak is %g and at the lodge is %g", vihrenPeak->temperature, vihrenPeak->temperature - temperaturedifference);
    }
    else
    {
        printf("The temperature on the lodge is %g and at the peak is %g", vihrenLodge->temperature, vihrenLodge->temperature + temperaturedifference);
    }
    
    free(vihrenLodge);
    free(vihrenPeak);
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
