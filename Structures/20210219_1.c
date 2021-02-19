/* Defining structure, access to members */

#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};


int main(void){
    struct tagPaper stPaper;
    stPaper.m_nBookId = 1001;
    strcpy(stPaper.m_szTitle, "Harry Potter and the Philosopher's Stone");
    strcpy(stPaper.m_szAuthor, "J. K. Rowling");
    strcpy(stPaper.m_szSubject, "The story of the Boy who Lived");
    printf("Paper Id : %d\n", stPaper.m_nBookId);
    printf("Paper Title : %s\n", stPaper.m_szTitle);
    printf("Paper Author : %s\n", stPaper.m_szAuthor);
    printf("Paper Subject : %s\n", stPaper.m_szSubject);

    struct tagPaper secondBook = {1002, "Harry Potter and the Chamber of Secrets", "J. K. Rowling", "The second book of The story of the Boy who Lived"};
    printf("\nPaper Id : %d\n", secondBook.m_nBookId);
    printf("Paper Title : %s\n", secondBook.m_szTitle);
    printf("Paper Author : %s\n", secondBook.m_szAuthor);
    printf("Paper Subject : %s\n", secondBook.m_szSubject);

    struct tagPaper thirdBook = {.m_szSubject = "The third book of the story of the Boy who Lived", .m_szAuthor = "J. K. Rowling", .m_szTitle = "Harry Potter and the Prisoner of Azkaban", .m_nBookId = 1003};
    printf("\nPaper Id : %d\n", thirdBook.m_nBookId);
    printf("Paper Title : %s\n", thirdBook.m_szTitle);
    printf("Paper Author : %s\n", thirdBook.m_szAuthor);
    printf("Paper Subject : %s\n", thirdBook.m_szSubject);

    return 0;
}

/* Prints Paper Id : 1001
          Paper Title : Harry Potter and the Philosopher's Stone
          Paper Author : J. K. Rowling
          Paper Subject : The story of the Boy who Lived

          Paper Id : 1002
          Paper Title : Harry Potter and the Chamber of Secrets
          Paper Author : J. K. Rowling
          Paper Subject : The second book of The story of the Boy who Lived

          Paper Id : 1003
          Paper Title : Harry Potter and the Prisoner of Azkaban
          Paper Author : J. K. Rowling
          Paper Subject : The third book of the story of the Boy who Lived */
