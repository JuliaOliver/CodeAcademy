/* Build an ordered binary search tree by sequentially adding the following vertices:
a) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
b) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
c) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
d) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
e) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14 */

#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;

#define SIZE 13

treeNode_t *root = NULL, *a, *b, *c, *d, *e;

treeNode_t *insert(int d);
void preorder(treeNode_t *n);

int main(void){
    int i;
    int arrA[SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    int arrB[SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    int arrC[SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    int arrD[SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    int arrE[SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    for(i = 0; i < SIZE; i++)
        insert(arrA[i]);
        insert(arrB[i]);
        insert(arrC[i]);
        insert(arrD[i]);
        insert(arrE[i]);
    a = root;
    b = root;
    c = root;
    d = root;
    e = root;

    preorder(a);
    printf("\n");
    preorder(b);
    printf("\n");
    preorder(c);
    printf("\n");
    preorder(d);
    printf("\n");
    preorder(e);


    return 0;
}

treeNode_t *insert(int d){
    treeNode_t *tmp = (treeNode_t *)malloc(sizeof(treeNode_t));
    treeNode_t *current= NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if(NULL == root){
        root = tmp;
    }else{
        current = root;
        while(1){
            parent = current;
            if(d < parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = tmp;
                    return tmp;
                }
            }else{
                current = current->right;
                if(current == NULL){
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}

void preorder(treeNode_t *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
