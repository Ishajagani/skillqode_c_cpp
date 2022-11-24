#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1,queqe[SIZE],i,val;
{
    if(rear>SIZE)

    {
        printf("Queqe Is Full:");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queqe[rear]=val;
    }
    else
    {
        queqe[++rear]=val;
    }
} 
void FrontDelete()
{
    if(front==-1)
    {
        printf("Queue is Full:");
    }
    else if(front==rear)
    {
        int x=queqe[front];
        front=rear=-1;
    }
    else
    {
        int x=queqe[front++];
    }
}
void print()
{
    if(front==-1)
    {
        printf("Queqe Is Full:"); 
    }
    else
    {
        for(i=front;i<=rear;i++)
        printf("\n\t\tq[%d]=%d",i,queqe[i]);
    }
} 
void frontInsert()
{
    if (front == 0)
        printf("\nQueue Is Full.....\n");
    else if (front == -1)
    {
        front = SIZE;
        rear = SIZE;
        printf("\n-----> If You Insert value Than press 1\n ");
    }
    else
    {
        front = front - 1;
        printf("Enter Value :");
        scanf("%d", &val);
        queqe[front] = val;
    }
}
void rearDelete()
{
    if (rear == 0)
        printf("\nQueue Is Empty.....\n");
    else
        rear--;
}
int main()
{
    int ch,val;
    do 
    {
        printf("\n press 1 for-->> rear insert");
        printf("\n press 2 for-->> front delete");
        printf("\n press 3 for-->> print");
        printf("\n press 4 for-->> front insert");
        printf("\n press 5 for-->> rear delete");
        printf("\n press 6 for-->> display");
        printf("\n press 0 for-->> exit");
        printf("\nenter your choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value:");
            scanf("%d",&val);
            RearInsert(val);
            break;
        case 2:
            FrontDelete();
            break;
        case 3:
            print();
            break;
        case 4:
            //printf("Enter Value:");
            //scanf("%d",&val);
            frontInsert(val);
            break;
        case 5:
            rearDelete();
            break;
        case 6:
            display();
            break;
       

        }
    }
    while(ch!=0);
}



                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
