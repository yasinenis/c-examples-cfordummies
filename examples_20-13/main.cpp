// examples_20-13

/* An interactive linked-list program */
/* Dan Gookin, C Programming For Dummies */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct lili {
    int value;
    struct lili* next;
};
struct lili* first;
struct lili* current;

int menu(void);
void add(void);
void show(void);
void delrec(void);
struct lili* create(void);

/* the main function works with input only
      everything else is handled by a function */
int main()
{
    /* initialize variables */
    int choice = '\0';
    first = NULL;

    while (choice != 'Q')
    {
        choice = menu();
        switch (choice)
        {
        case 'S':
            show();
            break;
        case 'A':
            add();
            break;
        case 'R':
            delrec();
            break;
        case 'Q':
            break;
        }
    }

    return(0);
}

/* output the main menu and collect input */
int menu(void)
{
    int ch;

    printf("S)how, A)dd, R)emove, Q)uit: ");
    ch = getchar();
    /* delete excess input */
    while (getchar() != '\n')
        ;
    return(toupper(ch));
}

/* add an item to the end of the linked list */
void add(void)
{
    /* special case for the first item */
    if (first == NULL)
    {
        first = create();
        current = first;
    }
    /* otherwise, find the last item */
    else
    {
        current = first;
        /* find the NULL */
        while (current->next)
            current = current->next;
        current->next = create();
        current = current->next;
    }
    printf("Type a value: ");
    scanf_s("%d", &current->value,sizeof(current->value));
    current->next = NULL;
    /* delete excess input */
    while (getchar() != '\n')
        ;
}

/* output all structures in the linked list */
void show(void)
{
    int count = 1;

    /* is the list empty? */
    if (first == NULL)
    {
        puts("Nothing to show");
        return;
    }
    puts("Showing all records:");
    current = first;
    /* loop until current==NULL */
    while (current)
    {
        printf("Record %d: %d\n",
            count, current->value);
        current = current->next;
        count++;
    }
}

/* delete a record from the list */
void delrec(void)
{
    /* the previous record must be saved */
    struct lili* previous;
    int r, c;

    /* is the list empty? */
    if (first == NULL)
    {
        puts("No records to remove");
        return;
    }

    puts("Choose a record to remove:");
    /* output the list */
    show();
    printf("Record: ");
    scanf_s("%d", &r,sizeof(r));
    /* delete excess input */
    while (getchar() != '\n')
        ;
    c = 1;
    /* reset the list */
    current = first;
    /* initialize the previous pointer */
    previous = NULL;
    while (c != r)
    {
        previous = current;
        current = current->next;
        c++;
        /* bail on the end of the list */
        if (current == NULL)
        {
            puts("Record not found");
            return;
        }
    }
    /* 'current' holds the record to delete */
    /* is it the first record? */
    if (previous == NULL)
        first = current->next;
    /* otherwise, reset the next reference */
    else
        previous->next = current->next;
    printf("Record %d removed.\n", r);
    /* release memory of the current record */
    free(current);
}

/* build an empty structure & return its address */
struct lili* create(void)
{
    struct lili* a;

    a = (struct lili*)malloc(sizeof(struct lili) * 1);
    if (a == NULL)
    {
        puts("Some kind of malloc() error");
        exit(1);
    }

    return(a);
}