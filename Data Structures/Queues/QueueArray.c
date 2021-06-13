#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void CreateQueue(struct queue *p){

    printf("Enter the size of the array: ");
    scanf("%d", &p->size);
    p->front=p->rear=-1;
    p->Q=(int *)malloc(p->size * sizeof(int));
}

void enqueue(struct queue *p, int x){

    if(p->rear==p->size-1){
        printf("\nQueue Overflow.");
    }
    else{
        p->Q[++p->rear]=x;
    }
}
int dequeue(struct queue *p){
    
    int x=-1;
    if(p->front==p->rear){
        printf("\nQueue Underflow.");
    }
    else{
        x=p->Q[++p->front];
    }
    return x;
}

void DisplayQueue(struct queue p){

    for(int i=p.front+1; i<=p.rear; i++){
        printf("%d\t", p.Q[i]);
    }
}

int main(){

    struct queue q1;
    CreateQueue(&q1);
    enqueue(&q1, 1);
    enqueue(&q1, 10);
    enqueue(&q1, 7);
    dequeue(&q1);
    dequeue(&q1);
    DisplayQueue(q1);
    return 0;
}
