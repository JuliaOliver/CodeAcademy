#include <stdio.h>
#include <string.h>

int printArray(int array[], int length){
    int i = 0;
    for(i; i < length; i++){
        printf("Array[%d] = %d\n",i, array[i]);
    }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int linearSearch(int array[], int length, int number){
    for(int i = 0; i < length; i++){
        if(array[i] == number){
            return i;
        }
    }
    return -1;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int binarySearch(int array[], int length, int number){
    int halfLength = length / 2;
    int i;

    if (array[halfLength] == number){
        return halfLength;
    }

    else if (array[halfLength] > number){
        for (i = 0; i <= halfLength; i++){
            if (array[i] == number){
                return i;
            }
        }
    }

    else if (array[halfLength] < number){
        for (i = halfLength; i < length; i++){
            if (array[i] == number){
                return i;
            }
        }
    }
    return -1;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void copyString(char *to, char *from){
    while(*from){
        *to++ = *from++;
    }
    
    *to = '\0';
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void toLower(char string[]){
    int i;
    for (i = 0; string[i]!='\0'; i++) {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 32;
        }
    }
    printf("\nString in LowerCase = %s\n", string);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void swap(int *xp, int *yp){ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void bubbleSort(int arrayChar[], int n){ 
    int i, j; 
    for (i = 0; i < n-1; i++){        
        for (j = 0; j < n-i-1; j++){  
            if (arrayChar[j] > arrayChar[j+1]){
                swap(&arrayChar[j], &arrayChar[j+1]);
                /* Needs the swap function */
            }
        }
    }
    for(i = 0; i < n; i++){
        printf("%c  ", arrayChar[i]);
    }  
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int stringCompare(char *s, char *t){
    int i = 0;
    for(i; s[i] == t[i]; i++){
        if(s[i] == '\0'){
            return 0;
        }
    return s[i] - t[i];
    }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int decimalToBinary(int number){
    int binary[12];
    int i = 0; 
    while (number > 0){ 
        binary[i] = number % 2; 
        number = number / 2; 
        i += 1; 
    }
    printf("Binary: ");
    for(i = i - 1; i >= 0; i -= 1){    
        printf("%d", binary[i]);    
    }
    printf("\n");
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
char reverse(char *string){
    int character;
    int i;
    int j;

    for(i = 0, j = strlen(string) - 1; i < j; i++, j--){
        character = string[i];
        string[i] = string[j];
        string[j] = character;
    }
    return *string;
}
