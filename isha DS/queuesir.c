#include<stdio.h>
#define size 5
int deque_arr[size];
int front =-1;
int rear=-1;
void insert_rear()
{
    printf("\n before -->front:%d,rear:%d",front,rear);
    int added_item;
    if((front == 0 && rear==size-1)||(front == rear+1))
    {
        printf("\n queue overflow:");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(rear==size-1)
     rear=0;
    else 
        rear=rear+1;
        printf("\n input the element for adding in queue:");
        scanf("%d",&added_item);
        deque_arr[rear]=added_item;
        printf("\n after -->front:%d,rear:%d",front,rear);
}
void insert_front()
{
    printf("\n after -->front:%d,rear:%d",front,rear);
    int added_item;
    if((front==0 && rear==size-1)||(front== rear+1))
    {
        printf("\n queue overflow");
        return;
    }
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else if(front==0)
        front=size-1;
    else 
        front=front-1;
    printf("\n input the element for adding in queue :");
    scanf("%d",&added_item);
    deque_arr[front]=added_item;
    printf("\n after-->front:%d,rear :%d",front,rear);
}
void delete_front()
{
    if(front==-1)
    {
        printf("\n queue undeflow \n");
        return;
    }
    printf("\n element deleted from queue is :%d",deque_arr[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==size-1)
        front=0;
    else
        front=front+1;
}
void delete_rear()
{
    if(front==-1)
    {
        printf("\n queue underflow");
        return;
    }
    printf("\n element deleted from queue is :%d",deque_arr[rear]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(rear==0)
       rear=size-1;
    else    
        rear=rear-1;
}
void display_queue()
{
    int front_pos=front,rear_pos=rear;
    if(front==-1)
    {
        printf("\n queue is empty");
        return;
    }
    printf("\n queue is element:");
    if(front_pos<=rear_pos)
    {
        while(front_pos<=rear_pos)
        {
            printf("%d",deque_arr[front_pos]);
            front_pos++;
        }
    }
else 
{
    while(front_pos<=size-1)
    {
        printf("%d",deque_arr[front_pos]);
        front_pos++;
    }
    front_pos=0;
    while(front_pos<=rear_pos)
    {
        printf("%d",deque_arr[front_pos]);
        front_pos++;
    }                
}
printf("\n");
}
int main()
{
    int choice;
    do
    {
      printf("\n 1.insert at rear");
      printf("\n 2.insert at front");
      printf("\n 3.delete from rear");
      printf("\n 4.delete from front");
      printf("\n 9.display");
      printf("\n 0.quit");
      printf("\n enter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
         insert_rear();
         break;
        case 2:
        insert_front();
        break;
        case 3:
            delete_rear();
            break;
        case 4:
            delete_front();
            break;
        case 9:
            display_queue();
            break;
        case 0:
            break;
        default:
            printf("\n wrong choice \n ");
        
      }
      
    } while(choice !=0);  
}


