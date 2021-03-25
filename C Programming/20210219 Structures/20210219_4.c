/* Alignment and packaging of structures */

#include <stdio.h>

struct tagTestA {
    char m_ch;
    short int m_si;
};
struct tagTestAP {
    char m_ch;
    short int m_si;
} __attribute__((packed));

int main() {
    printf("sizeof(A) = %d, sizeof(A-packed) = %d\n", sizeof(struct tagTestA), sizeof(struct
    tagTestAP));
    return 0;
} 

/* Prints sizeof(A) = 4, sizeof(A-packed) = 3 */
