#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    char *c=argv[1];
    unsigned int num =atoi(c);
    num &= 0x55555555;

return 0;
}
