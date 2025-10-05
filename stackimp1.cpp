#include<stdio.h>
#include<stdlib.h>

#define MAX 5

//declaring stack
int stack[MAX];
int top=-1;

//if stack is empty
int isEmpty(){
    return top==-1;
}

//if stack is full
int isFull(){
    return top==MAX-1;
}

//function for push operation 

int push(int value){
    if(isFull()){
        printf("Stack is full.Overflow\n");
        return -1;
    }

    else{
        top++;
        stack[top]=value;
        printf("%d is pushed onto the stack.\n",value);
    }
}

//function for pop operartion 
int pop(){
    if(isEmpty()){
        printf("Stack is Empty. Undeflow\n");
        return -1;
    }
    else{
        int poppedValue=stack[top];
        top--;
        printf("is popped out of the stack.\n",poppedValue);
        return poppedValue;
    }
}

int peek(){
    if(isEmpty()){
        printf("Satck is empty.Underflow\n");
        return -1;
    }
    else{
        return stack[top];
    }
}

int main(){
    int choice,value;

    while(1){
        printf("Ener your choice from 1-4.\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("chose any\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        printf("Enter any value to push.\n");
        scanf("%d",&value);
        push(value);
        break;

        case 2:
        pop();
        break;

        case 3:
        value=peek();
        if(value!=-1){
            printf("%d is the top value of the stack.\n",value);
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