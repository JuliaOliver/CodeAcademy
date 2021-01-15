/* Complete the camper task from file 20210113_10.c in the Data Types and Variables folder 
by adding a variable to collect the money the customer owes the company. Print the result. 
Ask the customer if he wants more available products. */

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

    int moneyOwed;

    if (rez == 1){
        moneyOwed = caravansPricePerDay;
    }
    else{
        moneyOwed = campersPricePerDay;
    }
    printf("You owe BGN %d\n", moneyOwed);
    printf("Would you like any other available product?");

    return 0;
}

/* When the customer enters his choice, the program calculates his bill and prints it
   then asks if the customer want any other available product and ends there. */
