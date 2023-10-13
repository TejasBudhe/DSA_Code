/*
Name = Tejas Budhe
Roll No. = 06
program id = 17
SE-IT (sem 3)
2023-24
*/

/*Array implementation of Normal Queue*/

#include<stdio.h>
#include<stdlib.h>

int choice, x;

//strcture of a node of LL
struct node
{
    struct node *next;
    int info;
};

//to create memory for a node
struct node* getnode()
{
    return ((struct node*)malloc(sizeof(struct node)));
}

//to free a node
void freenode(struct node* p)
{
    free(p);
}

//initializing the LL
struct node *list = NULL;

//to insert an element at end of LL
void enQueue(int x)
{
    if(list==NULL)
    {
        struct node *newnode;
        newnode=getnode();
        newnode->info=x;
        newnode->next=list;
        list=newnode;
        return;
    }
    //attach node at the end
    struct node *nn, *temp;
    nn= getnode();
    nn->info = x;
    nn->next =NULL;
    temp = list;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next = nn;
}

void deQueue()
{
    if(list==NULL)
    {
        //if empty
        printf("Empty LL");
        return;
    }
    struct node *temp;
    temp =list;
    list = list->next;
    freenode(temp);
}

void display()
{
    if(list==NULL)
    {
        //if empty
        printf("Empty LL");
        return;
    }
    struct node *temp;
    temp=list;
    while(temp->next!=NULL)
    {
        printf("%d\n", temp->info);
        temp=temp->next;
    }
    printf("%d", temp->info);
}
void main()
{

    while(choice!=4)
    {
        /*description of menu bar*/
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Enter in Queue");
        printf("\n2. Delete from Queue");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

        /*switch on entered choice*/
        switch(choice)
        {
            case 1: 
            printf("enter the number you want to add in the Queue: ");
            scanf("%d", &x);
            enQueue(x);
                break;
            case 2: deQueue();
                break;
            case 3: display();
                break;
            case 4:
                break;
            default:
                printf("incorrect choice");
        }
    }/*end of while*/

    /*Code execution completed*/
    printf("You got exit\n");
}
