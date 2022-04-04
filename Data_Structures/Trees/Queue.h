#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct queue
{
  int size;
  int front;
  int rear;
  struct node **Q;
};

void CreateQueue(struct queue *p, int s)
{

  p->size = s;
  p->front = p->rear = -1;
  p->Q = (struct node **)malloc(p->size * sizeof(struct node *));
}

void enqueue(struct queue *p, struct node *x)
{

  if (p->rear == p->size - 1)
  {
    printf("\nQueue Overflow.");
  }
  else
  {
    p->Q[++p->rear] = x;
  }
}
struct node *dequeue(struct queue *p)
{

  struct node *x = NULL;
  if (p->front == p->rear)
  {
    printf("\nQueue Underflow.");
  }
  else
  {
    x = p->Q[++p->front];
  }
  return x;
}

bool isEmpty(struct queue p)
{

  if (p.front == p.rear)
  {
    return true;
  }
  else
  {
    return false;
  }
}

#endif