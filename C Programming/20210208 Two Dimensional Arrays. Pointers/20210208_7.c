/* Write a global array that contains the number of days in each month in each position. 
Make a function to which year, month and day are given as arguments. 
Based on this, the function must return the searched day of the year.
For example, March 1 is the 60th day of the year. */

#include <stdio.h>

extern int globalArray[2][13];
int leapYear(int year);
void dayCheck(int arr[][13], int d, int m, int y);

int main(void){
    int globalArray[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    int day, month, year;

    printf("Enter a date. Only numbers supportet, example(1.3.2021)\n");
    printf("Day: ");
    scanf(" %d", &day);
    printf("Month: ");
    scanf(" %d", &month);
    printf("Year: ");
    scanf(" %d", &year);

    dayCheck(globalArray, day, month, year);

    return 0;
}

int leapYear(int year){
    if((year %4 == 0) && ((year % 400 == 0) || (year%100 != 0))){
        return 1;
    }
    return 0;
}

void dayCheck(int arr[2][13], int d, int m, int y){
    int yearCheck = leapYear(y);
    int currentDay = 0;

    if (yearCheck == 0){
        for (int i = 0; i < m; i++){
            currentDay += arr[0][i];
        }
    }

    if (yearCheck == 1){
        for (int i = 0; i < m; i++){
            currentDay += arr[1][i];
        }
    }

    currentDay += d;

    printf("\n%d.%d.%d is the %d day of the year\n\n", d, m, y, currentDay);
}

/* Depending the entered input, prints the corresponding answer */
