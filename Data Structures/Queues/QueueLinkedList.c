#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int data;
    struct queue *next;
} *front=NULL, *rear=NULL;

void enqueue(int x){

    struct queue *t=(struct queue *)malloc(sizeof(struct queue));
    if(t == NULL){
        printf("Queue Overflow.");
    }
    else{
        t->data = x;
        t->next = NULL;
        if(front == NULL){
            rear = front = t;
        }
        else{
            rear->next = t;
            rear = t;
        }
        
    }
}

int dequeue(){

    int x = -1;
    struct queue *t;

    if(front == NULL){
        printf("Queue Underflow.");
    }
    else{
        x = front->data;
        t= front;
        front = front->next;
        free(t); 
    }
    return x;
}

void Display(){

    struct queue *ptr = front;
    while(ptr){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main(){

    enqueue(5);
    enqueue(9);
    enqueue(3);
    enqueue(10);

    Display();
    printf("\n%d\n", dequeue());
    Display();

    return 0;
}
