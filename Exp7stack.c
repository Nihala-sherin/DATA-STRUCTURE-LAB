#include <stdio.h>
#include <stdlib.h>
int limit = 100;
int arr[100];
int top = -1;
//PUSH
void push() {
    int x;
    if (top == limit-1) {
        printf("stack is full\n");
    }
    else{
        printf("Enter the element to push:");
        scanf("%d",&x);
        top=top+1;
        arr[top] = x;
        printf("pushed %d to stack",x);
    }
}
//POP
int pop() {
    if (top < 0) {
        printf("stack is empty\n");
    }
    else{
    int d = arr[top];
    printf("\nremoved %d from stack\n",d);
    top--;
    return d;
    }
}
//PEEK
int getTop() {
    if (top < 0) {
    printf("stack is empty\n");
    }
    int t = arr[top];
    printf("\nTop element is: %d\n", t);
    return t;
}
//DISPLAY
void display() {
    if(top>=0){
        for (int i = 0; i <= top;i++) {
            printf("%d | ", arr[i]);
        }
    }
    else{
    printf("\nstack is empty\n");
    }
}
int main()
{
    int choice;
    do{
        printf("\nMENU:\n");
        printf("1)PUSH\n");
        printf("2)POP\n");
        printf("3)PEEK\n");
        printf("4)DISPLAY\n");
        printf("5)EXIT");
        printf("\nchoose your option : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:getTop();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            default:printf("\nInvalid Operation! Try Again... \n");
        }
    }while(1);
    return 0;
}