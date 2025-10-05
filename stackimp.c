#include<stdio.h>
#include<stdlib.h>

#define MAX 5

// defining the stack 
int stack[MAX];

// defining the top
int top=-1;

//if the stack is empty
int isEmpty(){
    return top==-1;
}

// if the stack is full
int isFull(){
    return top==MAX-1;
}

// push function

void push(int value){
    if(isFull()){
        printf("Stack is full");
    }

    else{
        top++;
        stack[top]=value;
        printf("%d is the pushed element.\n",value);
    }
}
int pop(){
        if(isEmpty()){
            printf("Stack is in underflow condition.\n");
            return -1;
        }

        else{
            int poppedValue=stack[top];
            top--;
            printf("%d is the popped value\n", poppedValue);
            return poppedValue;
        }
    }

    int peek(){
        if(isEmpty()){
            printf("Stack is empty. Can't peek the element\n");
            return -1;
        }

        else{
            return stack[top];
        }
    }

    int main(){
        int choice,value;

        while(1){
            printf("Enetr the choice for the operations\n");
            printf("1. Psuh\n");
            printf("1. Pop\n");
            printf("3. Peek\n");
            printf("4. Exit\n");
            printf("Enter your choice: \n");
            scanf("%d", &choice);


            switch(choice){
                case 1:
                printf("Enter the value to push the element into the stack");
                scanf("%d",&value);
                push(value);
                printf("%d push onto the stack\n",value);
                break;

                case 2:
                pop();
                break;

                case 3:
                value=peek();
                 if (value != -1)
                printf("%d is the top element\n",value);
                break;

                case 4:
                exit(0);

                default:
                printf("Enter the valid choice.\n");

            }
        }
        return 0;
    }