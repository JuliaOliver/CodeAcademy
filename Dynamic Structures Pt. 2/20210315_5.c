/* Write a recursive version of the binary tree crawl function. */

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;

#define SIZE 11

treeNode_t *root = NULL, *z;

treeNode_t *insert(int d);
void preorder(treeNode_t *n);
treeNode_t *search_rec(treeNode_t *t, int n);

int main(void){
    int i;
    int arr[SIZE] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};
    for(i = 0; i < SIZE; i++)
        insert(arr[i]);
    z = root;

    preorder(z);
    printf("\n");
    printf("Searched rec = %d", (search_rec(z, 10))->data);

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

treeNode_t *search_rec(treeNode_t *t, int n){
    if(t != NULL)
        if(t->data < n)
            t = search_rec(t->right, n);
    else if(t->data > n)
        t = search_rec(t->left, n);
    return t;
}

void preorder(treeNode_t *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
