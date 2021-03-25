#include <stdio.h>

enum getType{A, B};
struct newStruct{
    int integer;
    char text[10];
    double num;
    enum getType type;
};

int main(void){
    struct newStruct arrayStruct[20] = {{1, 'c', 2,5, A}, {2, 'c', 3,5, B}, {3, 'c', 4,5, A}, {4, 'c', 5,5, B}, 
    {5, 'c', 6,5, A}, {6, 'c', 7,5, B}, {7, 'c', 8,5, A}, {8, 'c', 9,5, B}, {9, 'c', 2,4, A}, {10, 'c', 2,6, B}, 
    {11, 'c', 2,7, A}, {12, 'c', 2,9, B}, {13, 'c', 2,8, A}, {14, 'c', 7,5, B}, {15, 'c', 4,5, B}, {16, 'c', 2,8, A}, 
    {17, 'c', 2,5, B}, {18, 'c', 9,5, A}, {19, 'c', 3,5, B}, {20, 'c', 2,7, A}};

    for(int i = 0; i < 20; i++){
        printf("Interger: %d\nText: %s\nDouble: %f\nType: %d\n\n", arrayStruct[i].integer, arrayStruct[i].text, arrayStruct[i].num, arrayStruct[i].type);
    }

    return 0;
}
