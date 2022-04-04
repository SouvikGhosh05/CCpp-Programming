#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

void Createtree()
{
    struct node *p, *t;
    struct queue q;
    int x;

    CreateQueue(&q, 100);
    printf("Enter root value: ");
    scanf("%d", &x);
    root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter left child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter right child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void preorder(struct node *p)
{

    if (p)
    {
        printf("%d\t", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(struct node *p)
{

    if (p)
    {
        inorder(p->lchild);
        printf("%d\t", p->data);
        inorder(p->rchild);
    }
}

void postorder(struct node *p)
{

    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d\t", p->data);
    }
}

int countnodes(struct node *p)
{

    if (p == NULL)
    {
        return 0;
    }
    else
    {
        return (countnodes(p->lchild) + countnodes(p->rchild) + 1);
    }
}

int height(struct node *p)
{

    int leftheight, rightheight;
    if (p == NULL)
    {
        return 0;
    }
    else
    {
        leftheight = height(p->lchild);
        rightheight = height(p->rchild);
        if (leftheight > rightheight)
        {
            return (leftheight + 1);
        }
        else
        {
            return (rightheight + 1);
        }
    }
}

int main()
{
    Createtree();
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    printf("Number of nodes: %d", countnodes(root));
    printf("\n");
    printf("Height is: %d", height(root));
    printf("\n");
    return 0;
}
