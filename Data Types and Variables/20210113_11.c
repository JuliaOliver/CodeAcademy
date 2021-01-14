/* Create a program that calculates the value of purchases in a grocery store. */

#include <stdio.h>

int main(){
    
    float fTomatoPrice = 4.5;
    float fFlourPrice = 1.80;
    float fYogurtPrice = 0.50;
    float fIceCream = 0.60;
    float fBonbons = 1.50;
    float fLolipop = 0.15;
    float fTomatoWeight;

    printf("Hello, welcome to our store! Today we offer - fresh tomatoes, flour, yogurt, ice cream cones and lollipops.\n");
    
    printf("How many kilograms of tomatoes would you like? ");
    
    scanf("%f",&fTomatoWeight);
    float fTomatoTotal = fTomatoWeight*fTomatoPrice;
    printf("%.2f", fTomatoTotal);

    return 0;
}

/* Prints the result of the entered quantity of tomatoes multiplied by their price. */
