#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

//condition for empty cq

int isEmpty(){
    return (front==-1||rear==-1);
}

int isFull(){
    return front==(rear+1)%MAX;
}

int enqueue(int value){
    if(isFull()){
        printf("CQ is Overflow.\n");
        return -1;
    }

    else if(front==-1||rear==-1){
        front=rear=0;
    }

    else{
        rear=(rear+1)%MAX;
        queue[rear]=value;
        printf("%d is enqueued into the CQ.\n",value);
    }
}

int dequeue(){
    if(isEmpty()){
        printf("CQ is Underflow.\n");
        return -1;
    }
    else if(front==rear){
         front=rear=-1;
    }

    else{
        int dequeuedValue=queue[front];
        front=(front+1)%MAX;
        printf("%d is the dequeued value from the CQ.\n",dequeuedValue);
        return dequeuedValue;
    }
}

int main(){
    int choice,value;

    while(1){
        printf("Ener your choice from 1-3.\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Exit\n");
        printf("chose any\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        printf("Enter any value to push.\n");
        scanf("%d",&value);
        enqueue(value);
        break;

        case 2:
        dequeue();
        break;

        case 3:
        exit(0);
        
        default:
        printf("Enter valid choice.\n");
            break;
        }
    }
    return 0;
}