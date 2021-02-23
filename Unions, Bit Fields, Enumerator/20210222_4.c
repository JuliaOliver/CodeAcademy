/* Define a date structure with members day, month, year. Create a variable 
to the "contractdate" structure. How many ways can you define it?
Set the value of the members of the structure in three different ways.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3 = 2020, .member1 = 21, .memeber2 = 2}; */

#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(void){
    struct date currentDate = {22,02,2021};
    printf("Current date: %i.%i.%i\n", currentDate.day, currentDate.month, currentDate.year); 

    struct date previousDate;
    previousDate.day = 21;
    previousDate.month = 02;
    previousDate.year = 2021;
    printf("Previous date: %i.%i.%i\n", previousDate.day, previousDate.month, previousDate.year); 

    struct date nextDate = {.year = 2021, .month = 02, .day = 23};
    printf("Next date: %i.%i.%i\n", nextDate.day, nextDate.month, nextDate.year); 

    return 0;
}

/* Prints Current date: 22.2.2021
          Previous date: 21.2.2021
          Next date: 23.2.2021 */
