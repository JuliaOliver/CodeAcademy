/* Imagine you have a caravan and camper rental company for which you need to develop software. 
You are a small company and you have a total of 3 caravans at a price of BGN 90 per day and 
3 campers at a price of BGN 100 per day. Declare variables on the number of caravans, the price of the caravans, 
the number of campers and their price. Make a menu that asks the customer the caravan or camper will want. 
Make a variable int rez; in which to record the result of his choice. This is done with the scanf function, 
which takes the number that the user entered on the console. */

#include <stdio.h>

int main(){
    
    char caravansCount = 3;
    char campersCount = 3;
    char caravansPricePerDay = 90;
    char campersPricePerDay = 100;

    printf("Welcome to Caravans and Campers for rent!\n");
    printf("If you want a caravan, press 1\n");
    printf("If you want a camper, press 2\n");

    int rez;

    scanf("%d", &rez);

    return 0;
}
/* The program only wants the customer to enter their input (1 or 2) and ends with that. */
