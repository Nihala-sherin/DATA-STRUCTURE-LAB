#include<stdio.h>
#include<stdlib.h>
int MAX=100;
int c,queue[100],item;
int front=-1,rear=-1,i,n,flag=0;
//ENQUEUE
void enqueue(){
    if((rear+1)%MAX==front){
        printf("Queue Overflow");
    }
    else{
        if(rear==-1)
        front=0;
        printf("\nEnter the element to insert : ");
        scanf("%d",&item);
        rear=(rear+1)%MAX;
        queue[rear]=item;
    }
}
//DEQUEUE
void dequeue(){
    if(front==-1){
        printf("\nQueue Underflow");
    }
    else if(front==rear){
        printf("\nThe deleted element is:%d\n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("\nThe deleted element is:%d\n",queue[front]);
        front=(front+1)%MAX;
    }
}
//SEARCH
void search(){
    printf("\nEnter the value to search\n");
    scanf("%d",&n);
    if(front==-1){
        printf("\nQueue Underflow\n");
    }
    else{
        int front_pos=front,rear_pos=rear;
        if(front_pos>rear_pos){
            while(front_pos>rear_pos){
            printf(" %d ",queue[front_pos]);
            front_pos=((front_pos+1))%MAX;
            }
        }
        if(front_pos<=rear_pos){
            for(i=front_pos;i<=rear_pos;i++){
                if(queue[i]==n){
                flag=1;
                break;
                }
                else
                flag=0;
            }
        }
    }
    if(flag==1)
    printf("\nElement is found ");
    else
    printf("\nElement is not found\n");
    }
//DISPLAY
void display(){
    if(front==-1){
        printf("\nQueue Underflow");
    }
    else{
        int front_pos=front,rear_pos=rear;
        if(front_pos>rear_pos){
            while(front_pos>rear_pos){
                printf(" %d ",queue[front_pos]);
                front_pos=((front_pos+1))%MAX;
            }
        }
        if(front_pos<=rear_pos){
            for(i=front_pos;i<=rear_pos;i++)
            printf(" %d ",queue[i]);
        }
    }
}
int main()
{
    int choice;
    do{
        printf("\nMENU:\n");
        printf("1)Insert\n");
        printf("2)Delete\n");
        printf("3)Search\n");
        printf("4)Display\n");
        printf("5)Exit");
        printf("\nchoose your option : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:search();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            default:printf("\nInvalid Operation! Try Again... \n");
        }
    }while(choice!=5);
    return 0;
}



