/* Define the string "I am a poor programmer". 
Replace "poor" with "great" via pointer. */

#include<stdio.h>


int main(void){
    char *s[] = {"I", "am", "a", "poor", "programmer"};
    int i = 0;
    while(i < 5){
        if(s[i] == "poor"){
            s[i] = "great";
        }
        i++;
    }
    printf("New string = ");
    for (int i = 0; i < 5; i++){
        printf("%s ", s[i]);
    }

    return 0;
}

/* Prints New string = I am a great programmer */
