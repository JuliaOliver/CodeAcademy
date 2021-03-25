/* switch construction */

#include <stdio.h>

int main(){
    char chCode;
    scanf("%c", &chCode);
    printf("Code %c -> ", chCode); 
    switch(chCode){
        case 'x':
            printf("No\n" );
            break;
        case'y':
            printf("Maybe\n" ); 
            break;
        case'z':
            printf("Maybe\n" ); 
            break;
        case 'a':
            printf("Yes\n" );
            break;
        default :
            printf("Unknown\n" );
            break;
    }
    return 0;
}

/* Depending on the entered character, prints the corresponding answer. */
