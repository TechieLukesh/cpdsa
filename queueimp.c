#include<stdio.h>
#include<stdlib.h>

#define MAX 5


//declaring queue
int queue[MAX];
//declaring ends of the queue

int front=-1;
int rear=-1;

//if the queue is empty
int isEmpty(){
    return (front==-1||front>rear);
}

//if the queue is full
int isFull(){
    return rear==MAX-1;
}

// function to insert the elements
int enqueue(int value){
    if(isFull()){
        printf("Queue is full.Overflow\n");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("%d is enqueued onto the queue.\n",value);
    }
}

//function to pop the elements from the queue

int dequeue(){
    if(isEmpty()){
        printf("Queue is empty.Underflow\n");
    }

    else{
        int dequeuedValue=queue[front];
        front++;
        printf("%d is dequeued from the queue.\n",dequeuedValue);
        return dequeuedValue;

        if(front>rear){
            front=rear=-1;
        }
    }
}

int peek(){
    if(isEmpty()){
        printf("Queue is empty. Underflow\n");
    }

    else{
        return queue[front];
        printf("%d is the front element.\n");
    }
}

int main(){
    int choice,value;

    while(1){
        printf("Ener your choice from 1-4.\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
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
        value=peek();
        if(value!=-1){
            printf("%d is the front value of the queue.\n",value);
        }
        break;

        case 4:
        exit(0);
        
        default:
        printf("Enter valid choice.\n");
            break;
        }
    }
    return 0;
}
