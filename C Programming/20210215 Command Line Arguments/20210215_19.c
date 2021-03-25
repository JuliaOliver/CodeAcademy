/* Define a string: "Baba, kaka, mama" replace "a" with "o" */

#include<stdio.h>

char* replaceChar(char s[]);

int main(void){
    char s[] = "Baba, kaka, mama";
    printf("New string = %s", replaceChar(s));

    return 0;
}

char* replaceChar(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i]=='a'){
            s[i]='o';
        }
        i++;
    }
    return s;
}

/* Prints New string = Bobo, koko, momo */
