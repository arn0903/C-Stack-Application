#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


/*
node structure
*/
typedef struct node
{
    int data;
    struct node *next;
}t_node;

t_node *create();
t_node *Push(t_node *list, t_node *newnode);
t_node *Pop(t_node *top);
void Top(t_node *list);
void display(t_node *top);
void printLength(t_node *list);
void freeMemory(t_node *list);
int menu();

#endif // STACK_H_INCLUDED
