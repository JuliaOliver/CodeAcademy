/* Code variation from file 20210217_19.c: Try with queue (FIFO), 
but now you suggest API and try it in main (). */

#include <stdio.h>

int MAXSIZE = 16;
int queue[16];
int top = -1;

int isempty();
int isfull();
int peek();
int pop();
int push(int data);

int main() {
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    pop();
    pop();


    printf("Element at top of the queue: %d\n" ,peek());
    printf("Elements: \n");

    while(!isempty()){
        int data = pop();
        printf("%d\n",data);
    }
    printf("queue full: %s\n" , isfull()?"true":"false");
    printf("queue empty: %s\n" , isempty()?"true":"false");
    return 0;
}

int isempty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(){
    if(top == MAXSIZE){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(){
    return queue[top];
}

int pop(){
    int data;
    if(!isempty()){
        data = queue[0];
        top = top - 1;
        for(int i = 1; i < MAXSIZE - 1 ; i++) 
            queue[i-1]=queue[i];
        return data;
    } 
    else{
        printf("Could not retrieve data, queue is empty.\n");
    }
}

int push(int data){
    if(!isfull()){
        top = top + 1;
        queue[top] = data;
    } 
    else{
    printf("Could not insert data, queue is full.\n");
    }
}

/* Prints Element at top of the queue: 15
          Elements: 
          9
          1
          12
          15
          queue full: false
          queue empty: true */
