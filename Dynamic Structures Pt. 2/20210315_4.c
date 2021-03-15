/* Delete the tops 1, 7, 12 14 of the tree in this order */

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
treeNode_t *search(int d);
int del(int n);

int main(void){
    int i;
    int arr[SIZE] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};
    for(i = 0; i < SIZE; i++)
        insert(arr[i]);
    z = root;

    preorder(z);
    printf("\n");
    del(1);
    del(7);
    del(12);
    del(14);
    preorder(z);

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


treeNode_t *search(int d){
    treeNode_t *current = root;
    //printf("Visiting elements: ");
    while (current->data != d){
        if(current != NULL)
            //printf("%d ", current->data);
        if(current->data > d)
            current = current->left;
        else
            current = current->right;
        if(current == NULL)
            return NULL;
    }
    return current;
}

int del(int n){
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if(current->right == NULL && current->left != NULL){
        printf("del = %d\n", current->left->data);
        current = current->left;
        Sleep(100000);
        free(current);
        parent->left = NULL;
    }else if(current->right != NULL && current->left == NULL){
        current = current->right;
        free(current);
        parent->right = NULL;
    }
}
