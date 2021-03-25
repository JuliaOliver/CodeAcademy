/* Make an array of 10 structures from task 20210222_4.c. Set a value for the 10 dates of your choice.
struct name array [10]; / * define array * /
array [i] .member = value; / * set member value * /
struct name array [10] = {{1,3,2019}, {3,4,2020}} / * define and init array members * /
struct name array [10] = {[1] = {3,4,2020}}; / * define and init array members * /
struct name array [10] = {[1] .month = 4, [1] .year = 2020}; / * define and init array members * / */

#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(void){
    struct date calendar[10] = {{23,02,2021}, {24,02,2021}, {25,02,2021}, {26,02,2021}, {27,02,2021}, {28,02,2021}, {01,03,2021},
    {02,03,2021}, {03,03,2021}, {04,03,2021}};

    for(int i = 0; i < 10; i++){
        printf("Current date: %i.%i.%i\n", calendar[i].day, calendar[i].month, calendar[i].year);
    }

    return 0;
}

/* Prints Current date: 23.2.2021
          Current date: 24.2.2021
          Current date: 25.2.2021
          Current date: 26.2.2021
          Current date: 27.2.2021
          Current date: 28.2.2021
          Current date: 1.3.2021
          Current date: 2.3.2021
          Current date: 3.3.2021
          Current date: 4.3.2021 */
