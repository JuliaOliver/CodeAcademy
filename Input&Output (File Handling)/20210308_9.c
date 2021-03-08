/* Write text with a formatting parameter. int fprint (FILE * stream, const char * form…); 
The first parameter is a stream file, the second is the format character, followed by its number, 
and so on. The formatting character can be a space, a specifier, etc. If successful, 
the function returns the number of characters saved, if an error returns a negative value. */

#include <stdio.h>

static const char *FORMAT = "(%s, %s, %d)\n";

typedef struct Person{
char name[20];
char surname[20];
int age;
}t_person;

int main(void){
    t_person m ={
        .name = "Julia",
        .surname = "Vasileva",
        .age = 25
    };

    FILE *filePtr;
    filePtr = fopen("person.txt", "w+" );
    if(NULL == filePtr)
    return 1;
    fprintf(filePtr, FORMAT, m.name, m.surname, m.age);
    
    fclose(filePtr);

    return 0;
}
