#include "stack.h"

int main()
{
    t_node *list = NULL;
    t_node *new_node= NULL;

    int choose;
    do
    {
        //menu
        choose = menu();
        switch(choose)
        {

        //menu 1: push
        case 1:
            new_node = create();
            list = Push(list, new_node);
            break;

        //menu 2: pop
        case 2:
            list = Pop(list);
            break;

        //menu 3: top
        case 3:
            Top(list);
            break;

        //menu 4: print
        case 4:
            display(list);
            break;

        //menu 5: printLength
        case 5:
            printLength(list);
            break;

        //menu 6: quit
        case 6:
            printf("Goodbye\n");
            break;

        default:
            printf("ERREUR INPUT VALUE\n");
        }


    }
    while(choose!=6);

    freeMemory(list);
    return 0;

}
