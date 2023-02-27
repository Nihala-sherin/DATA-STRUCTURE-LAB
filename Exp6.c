
#include <stdio.h>
#include <stdlib.h>
int i,n = 100,size = 0;
int a[100];
//CREATE
void create(){
     printf("Enter the number of elements: ");
     scanf("%d",&size);
     printf("Enter the numbers: ");
     for (i=0;i<size;i++){
         scanf("%d",&a[i]);
         printf("arr[%d] = %d\n",i,a[i]);
     }
     printf("Array created successfully!\n");
}
//INSERT
void insert(){
     int x;
     int pos;
     printf("\nEnter the number to insert: ");
     scanf("%d",&x);
     printf("Enter the position to insert: ");
     scanf("%d",&pos);
     for (i=size;i>=pos;i--){
            a[i+1] = a[i];

     }
     a[pos-1] = x;
     size = size+1;
    display();
}
 //DELETE
void Delete(){
    int d,j;
     printf("\nenter the element to delete: ");
     scanf("%d",&d);
     for (i=0;i<size;i++){
            if(a[i]==d){
                 size=size-1;
                 int dpos=i;
                 for (j=dpos;j<=size;j++){
                     a[j]=a[j+1];

                 }
                 display();
                 return;
            }
     }
    printf("No such number in the list!");
}
 //STORE
void store(){
     int x;
     int pos;
     printf("\nEnter the number to store: ");
     scanf("%d",&x);
     printf("Enter the position to store: ");
     scanf("%d",&pos);
     a[pos-1]=x;
     display();
}
//SORT
void sort(){
     int temp,j;
     printf("\nThe sorted array is:");
     for (i=0;i<size-1;i++){
        for (j=0;j<size-1;j++){
            if (a[j]>a[j+1]){
                 temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
            }
        }
     }
     display();
}
//DISPLAY
void display(){
     if(size==0){
        printf("The list is empty.");
     }
     else{
         for (i=0;i<size;i++){
            printf("%d\t",a[i]);
         }
     }
}
int main(){
     int choice=0;
     while(1){
         printf("\nMENU: \n1)CREATE A LIST \n2)INSERT \n3)DELETE \n4)STORE\n5)SORT \n6)DISPLAY \n7)QUIT\n");
         printf("Enter your choice: ");
         scanf("%d",&choice);
         if (choice==7){
            exit(0);
         }
     switch(choice){
         case 1: create();
         break;
         case 2: insert();
         break;
         case 3: Delete();
         break;
         case 4: store();
         break;
         case 5: sort();
         break;
         case 6: display();
         break;
         default: printf("Invalid option!");
     }

     }
     return 0;
}
