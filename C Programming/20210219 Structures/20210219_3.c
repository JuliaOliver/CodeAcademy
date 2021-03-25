/* Pointers to structure, transfer of structure of a function by value and by reference */

#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

void printPaper(struct tagPaper paper){
    printf( "Paper Id : %d\n", paper.m_nBookId);
    printf( "Paper Title : %s\n", paper.m_szTitle);
    printf( "Paper Author : %s\n", paper.m_szAuthor);
    printf( "Paper Subject : %s\n", paper.m_szSubject);
}

void printPtrPaper(struct tagPaper* pPaper) {
    printf("Paper Id : %d\n", pPaper->m_nBookId);
    printf("Paper Title : %s\n", pPaper->m_szTitle);
    printf("Paper Author : %s\n", pPaper->m_szAuthor);
    printf("Paper Subject : %s\n", pPaper->m_szSubject);
}

int main(void){
    struct tagPaper myPaper = {1001, "Harry Potter and the Philosopher's Stone", "J. K. Rowling", "The story of the Boy who Lived"};
    printPaper(myPaper);
    printf("---\n");
    printPtrPaper(&myPaper);
    return 0;
}

/* Prints Paper Id : 1001
          Paper Title : Harry Potter and the Philosopher's Stone
          Paper Author : J. K. Rowling
          Paper Subject : The story of the Boy who Lived
          ---
          Paper Id : 1001
          Paper Title : Harry Potter and the Philosopher's Stone
          Paper Author : J. K. Rowling
          Paper Subject : The story of the Boy who Lived */
