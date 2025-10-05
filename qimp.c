#include<stdio.h>
#include<stdlib.h>

// defining the size of the queue
#define MAX 5

// declaring queue
int queue[MAX];

//initializing the ends of the queue
int front=-1;
int rear=-1;

// if the queue is empty

int isEmpty(){
    return (front==-1 || front>rear); 
}

// if the queue is full 

int isFull(){
    return rear==MAX-1;
}

void enqueue(int value){
    if(isFull()){
        printf("queue is full-Overflow.\n");
    }

    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("%d is the enqueued value",value);
    }
}

int dequeue(){
    if(isEmpty()){
        printf("queue is empty.Underflow\n");
        return -1;
    }
    else{
        int dequeued=queue[front];
        front++;

        if(front>rear){
            front=rear=-1;
        }
        return dequeued;
    }
    
}

int peek(){
    if(isEmpty()){
        printf("Queue is empty.\n");
        return -1;
    }

    else{
        return queue[front];
    }
}

int main(){
    int choice,value;

    while(1){
        printf("Enter 1-4 to chose the operations.\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the value to enqueue onto the queue.\n");
            scanf("%d", &value);
            enqueue(value);
            printf("%d enqueued onto the queue.\n",value);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            value=peek();
            if(value!=-1){
                printf("%d is the front element.\n",value);
            }
              break;
            case 4:
            exit(0);

            default:
            printf("Enter the valid choice.\n");
        }
    }
    return 0;
}