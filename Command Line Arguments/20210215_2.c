/* #include <stdio.h>
int main (int argc, char ** argv) {
    int i;
    for (i = 1; i <argc; i ++)
        printf ("% s", argv [i]);
    printf ("\ n");
    return 0;
}
* argv [] from the example is a pointer to strings, rewrite the above code 
as you work with the pointers. Since argv is a pointer to the beginning of an 
array of strings, increasing it by 1 (++ argv) will point it to argv [1]. 
Each subsequent increment moves the pointer to the next argument. */

#include <stdio.h>

int main(int argc, char *argv[]){
    for(argv; *argv; argv++){
        printf("%s ", *argv);
        printf("\n");
    }
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
