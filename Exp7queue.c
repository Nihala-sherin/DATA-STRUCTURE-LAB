#include <stdio.h>
#include <stdlib.h>
int n = 100;
int arr[100];
int front=-1;
int rear=-1;
//enqueue
    void insert(){
        int x;
        printf("Enter the number to insert:");
        scanf("%d",&x);
        if (rear==n-1){
            printf("Queue is full");
        }
        else{
            front=0;
            rear=rear+1;
            arr[rear] = x;
            printf("Element inserted successfully!");
        }
    }
//dequeue
    int del(){
        if (rear==-1){
           printf("Queue is empty");
        }
        else{
            int d = arr[front];
            printf("\n\n Value removed : %d\n\n",d);
            if(front==rear){
            front=-1;
            rear=-1;
            }
            front++;
        return d;
        }
    }
//isempty
    void isEmpty(){
        if(rear==-1){
            printf("Queue is empty");
        }
    }
//isfull
    void isFull(){
        if(rear==n-1){
            printf("Queue is full");
        }
    }
//display
    void display(){
        if(rear==-1){
            printf("Queue is empty\n");
        }
        else{
            for (int i=front;i<=rear;i++){
                printf("%d | ",arr[i]);
            }
        }
    }
int main()
{
    int choice;
    do{
        printf("\nMENU:\n");
        printf("1)ENQUEUE\n");
        printf("2)DEQUEUE\n");
        printf("3)IsEmpty\n");
        printf("4)IsFull\n");
        printf("5)DISPLAY\n");
        printf("6)EXIT");
        printf("\nchoose your option : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();
            break;
            case 2:del();
            break;
            case 3:isEmpty();
            break;
            case 4:isFull();
            break;
            case 5:display();
            break;
            case 6:exit(0);
            default:printf("\nInvalid Operation! Try Again... \n");
        }
    }while(1);
    return 0;
}