/* Move your position in the file 7 bytes after the start, using fseek. 
int fseek (FILE * pfile, long offset, int original); The first parameter 
is a pointer to the file, the second and third parameters indicate exactly 
where we want to go in the file.
Reference points with predefined names:
SEEK_SET- start of the file
SEEK_CUR- current position
fseek (fp, -10L, SEEK_CUR); returns to the back of the current 10 bytes.
SEEK_END- end of file
fseek (fp, 0L, SEEK_END);
For text files, the second argument must be the value returned by ftell (). 
For text files, the third argument must be SEEK_SET, for binaries, and a prime number in bytes. */

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

    fseek(filePtr, 7, SEEK_SET);
    long fpos = ftell(filePtr);
    printf("Current position is %ld", fpos);
    
    fclose(filePtr);

    return 0;
}
