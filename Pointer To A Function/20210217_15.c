/* Write a program analogous to a lottery.
Use features.
Guidelines:
1. You give the player the right to choose the tote in which
will try his luck: (5 of 35), (6 of 42) or (6 of 49)
2. At each rotation the program displays 1 random number,
which has not been removed so far.
3. The program takes out the numbers needed for the selected game (5 or 6). */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void numbersGenerator(int count, int from, int nums[]);

int main(void){
    int count;
    int from;

    printf("Which lottery do you want to play: 5/35, 6/42 or 6/49\nChoiche: ");
    scanf("%d / %d", &count, &from);

    if (count == 5){
        int lotterty[5];
    }
    int lotterty[6];

    printf("count = %d, from = %d\n", count, from);
    numbersGenerator(count, from, lotterty);
    return 0;
}

void numbersGenerator(int n, int from, int nums[]){
    int numbersCount = from;
    time_t t;
    srand((unsigned int)(time(&t))); 

    int i = 0;
    int num;

    for(i = 0 ; i < n ; i++ ){
    num = rand() % from;
    for(int j = 0; j < i; j++){
        if (nums[j] == num || num == 0){
            i--;
            break;
        }
        else{
            nums[i] = num;
        }
    }
    }

    printf("The lottery numbers are: ");
    for(int i; i < n; i++){
        printf("%d  ", nums[i]);
    }
}

/* Depending the entered input, prints the corresponding answer */
