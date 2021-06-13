#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root=NULL;

struct node* insert(struct node *p, int x){
    
    struct node *t;
    if(p == NULL){
        t=(struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(x < p->data){
        p->lchild = insert(p->lchild,x);
    }
    else if(x > p->data){
        p->rchild = insert(p->rchild,x);
    }
    return p;
}

struct node* Rsearch(struct node *p, int x){

    if(p == NULL){
        return NULL;
    }
    if(x == p->data){
        return p;
    }
    else if (x < p->data){
        return Rsearch(p->lchild,x);
    }
    else if(x > p->data){
        return Rsearch(p->rchild,x);
    }
}
void isFound(struct node *p, int x){

    if(Rsearch(p, x)){
        printf("\n%d is found.",x);
    }
    else{
        printf("\n%d is not found.",x);
    }
}

int height(struct node *p){

    int leftheight, rightheight;
    if(p == NULL){
        return 0;
    }
    else{
        leftheight = height(p->lchild);
        rightheight = height(p->rchild);
        if(leftheight > rightheight){
            return (leftheight+1);
        }
        else{
            return (rightheight+1);
        }
    }
} 

int countnodes(struct node *p){
    
    if(p == NULL){
        return 0;
    }
    else{
        return (countnodes(p->lchild) + countnodes(p->rchild) + 1);
    }
}

int countExternalnodes(struct node *p){

    if(p == NULL){
        return 0;
    }
    else if ((p->lchild == NULL) && (p->rchild == NULL)){
        return 1;
    }
    else{
        return (countExternalnodes(p->lchild)+countExternalnodes(p->rchild));
    }
    
}

int countInternalnodes(struct node *p){

    if((p == NULL) || ((p->lchild == NULL) && (p->rchild == NULL))){
        return 0;
    }
    else{
        return (countInternalnodes(p->lchild) + countInternalnodes(p->rchild) + 1);
    }
} 

void inorder(struct node *p){

    if(p){
        inorder(p->lchild);
        printf("%d\t",p->data);
        inorder(p->rchild);
    }
}

int main(){
    
    root = insert(root,1);
    insert(root,2);
    insert(root,9);
    insert(root,5);
    insert(root,10);
    insert(root,4);
    inorder(root);
    isFound(root,9);
    printf("\nHeight is %d.",height(root));
    printf("\nNumber of nodes are %d.",countnodes(root));
    printf("\nNumber of External nodes are %d.",countExternalnodes(root));
    printf("\nNumber of Internal nodes are %d.",countInternalnodes(root));
    
    
    return 0;
}