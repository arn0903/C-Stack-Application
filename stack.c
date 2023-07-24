#include "stack.h"

/*
function to create a node
*/
t_node *create()
{
    t_node *new_n = NULL;
    new_n = (t_node*)malloc (sizeof(t_node));
    if (new_n == NULL)
    {
        printf("memory alloc problem\n");
    }
    else
    {
        printf("Input a number: ");
        scanf("%d", &(new_n->data));
        new_n->next = NULL;
    }
    return new_n;
}


/*
function to print the top
*/
void Top(t_node *list)
{
    //if the stack is empty
    if(list==NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nTop is: %d\n\n", list->data); //print first element
    }

}


/*
function to add a new element
*/
t_node *Push(t_node *list, t_node *newnode)
{
    newnode->next = list; //insert a new node at the top
    list = newnode; //update top pointer

    printf("\nElement has been added\n\n");

    return list;
}

/*
function to remove an element
*/
t_node *Pop(t_node *top)
{
    t_node *current;

    //if the stack is empty
    if (top == NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        //update pointers and free memory
        current = top;
        top = top->next;
        free(current);

    }
    printf("\nElement has been removed\n\n");

    return top;
}

/*
function to display the stack
*/
void display(t_node *top)
{
    t_node *current;

    //if the stack is empty
    if (top == NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        current = top;
        printf("\n-------TOP-------\n");

        //traverse
        while (current->next != NULL)
        {
            printf("\t%d\n", current->data);
            current = current->next;
        }
        //print last element
        printf("\t%d\n-----BOTTOM------\n\n", current->data);
    }
}

/*
function to display the stack Length
*/
void printLength(t_node *list)
{
    t_node *current;
    int counter = 0;

    //if the stack is empty counter is null
    if (list == NULL)
    {
        counter = 0;
    }
    else
    {
        current = list;

        //traverse the list and increment counter
        while(current->next != NULL)
        {
            current = current->next;
            counter++;
        }
        counter++;  //last element

    }
    printf("\nStack length is %d\n\n", counter);
}

/*
function to free allocated memory
*/
void freeMemory(t_node *list)
{
    //base case
    if(list == NULL)
    {
        //nothing to do
    }
    else
    {
        //free remaining nodes
        freeMemory(list->next);
        free(list);
    }
}


/*
menu function  
*/
int menu()
{
    int choice;

    printf(" STACKS\n1-Push\n");
    printf("2-Pop\n");
    printf("3-Top\n");
    printf("4-Print\n");
    printf("5-PrintLenght\n");
    printf("6-Quit\n");
    do
    {
        printf(" Your choice: ");
        scanf("%d",&choice);
    }
    while ((choice<1)||(choice>6));
    return choice;
}
