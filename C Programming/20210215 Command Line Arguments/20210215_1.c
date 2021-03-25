/* Let's write a function char * month_name (int n), which returns a pointer to a string 
containing the name of the nth month. Declaring a static array of pointers 
pointing to strings containing the names of the months
static char * name [] = {"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"}
Declaring a static array in the function scope means that its name will be visible 
throughout the file and will continue to live after exiting the function scope 
after the end of the program. The function returns a pointer to the corresponding 
month corresponding to the parameter n. */

#include <stdio.h>

char *month_name(int n);

int main(void){
    int n;
    printf("Enter number of month: ");
    scanf(" %d", &n);
    printf("Month %d is %s", n, month_name(n));

    return 0;
}

char *month_name(int n){
    static char *name[] = {"Illegal month",
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"};

    char *pointer = *name;

    if(n < 0 || n > 12){
        return (pointer);
    }

    return name[n];
}

/* Depending the entered input, prints the corresponding answer */
