/* Describe the time: hours: minutes: seconds as a tagTMyTime structure. Using this structure, 
define the following functions: add seconds, add minutes. adding hours to a variable of type 
struct tagTMyTime. Write the following functions: return the number of seconds for a variable 
of the entered type and the inverse function of seconds to generate a variable tagTMyTime. 
Write two functions that subtract and add two variables of type struct tagMyTime and return a 
variable of the same type. Use these features to make sure they work correctly. Dynamic memory 
allocation and typedef must be used in the solution. */

#include <stdio.h>
#include <stdlib.h>
typedef struct tagTMyTime
{
    int hours;
    int minutes;
    int seconds;
} tagTMyTime;
int hoursplusmins(tagTMyTime *ptr)
{
    return ptr->hours + ptr->minutes;
}
int secondsminushours(tagTMyTime *ptr)
{
    return ptr->seconds - ptr->minutes;
}
int addseconds(tagTMyTime *ptr)
{
    printf("Enter seconds in format 1-.. .\n");
    scanf("%d", &ptr->seconds);
    return ptr->seconds;
}
int addminutes(tagTMyTime *ptr)
{
    printf("Enter minutes in format 1-.. .\n");
    scanf("%d", &ptr->minutes);
    return ptr->minutes;
}
int addhours(tagTMyTime *ptr)
{
    printf("Enter hours in format 1-.. .\n");
    scanf("%d", &ptr->hours);
    return ptr->hours;
}
float printsecondsfromhour(tagTMyTime *ptr)
{
    return ptr->hours * 3600;
}
float printsecondsfromMins(tagTMyTime *ptr)
{
    return ptr->minutes * 60;
}
float printminutesfromSeconds(tagTMyTime *ptr)
{
    return ptr->seconds * 0.0166666667;
}
float printhoursfromSeconds(tagTMyTime *ptr)
{
    return ptr->seconds * 0.000277777778;
}
void convertion(tagTMyTime *, int);

int main(void)
{
    int choice = 0;
    tagTMyTime *ptr;
    ptr = (tagTMyTime *)malloc(sizeof(tagTMyTime));
    addhours(ptr);
    addminutes(ptr);
    addseconds(ptr);
    printf("Hours + mins = %d\n", hoursplusmins(ptr));
    printf("Seconds - hours = %d\n", secondsminushours(ptr));
    convertion(ptr, choice);
    free(ptr);
    return 0;
}

void convertion(tagTMyTime *ptr, int choice)
{
    while (choice != 5)
    {
        printf("What conversation do you want? \n");
        printf("seconds -> hours press 1 \n");
        printf("seconds -> minutes press 2 \n");
        printf("hours -> seconds press 3\n");
        printf("minutes -> seconds press 4\n");
        printf("To quit press 5\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addseconds(ptr);
            printf("%.2f\n", printhoursfromSeconds(ptr));
            break;
        case 2:
            addseconds(ptr);
            printf("%.2f\n", printminutesfromSeconds(ptr));
            break;
        case 3:
            addhours(ptr);
            printf("%.2f\n", printsecondsfromhour(ptr));
            break;
        case 4:
            addminutes(ptr);
            printf("%.2f\n", printsecondsfromMins(ptr));
            break;
        }
    }
}

/* Depending the entered input, prints the corresponding answer */
