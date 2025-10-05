#include<iostream>
#define MAX 5
using namespace std;

int stack[MAX];

int top=-1;

int isFull(){
    return top==MAX-1;
}

int isEmpty(){
    return top==-1;
}

void push(int value){
    if(isFull()){
        cout<<"Stack is full. No more elements can be pushed."<<endl;
    }

    else{
        top++;
        stack[top]=value;
        cout<<value<<" is pushed onto the stack."<<endl;
    }
}



int pop(){
    if(isEmpty()){
        cout<<"Stack is empty. No more elements can be popped out."<<endl;
        return -1;
    }

    else{
        int poppedValue=stack[top];
        top--;
        cout<<poppedValue<<" is the popped value from the stack."<<endl;
        return poppedValue;
    }
}

int peek(){
    if(isEmpty()){
        cout<<"Stack is empty already."<<endl;
    }

    else{
        return stack[top];
    }
}

int main(){
    int value, choice;

    while(1){
        cout<<"Enter the choice"<<endl;
        cout<<"1. Push Element"<<endl;
        cout<<"2. Pop Element"<<endl;
        cout<<"3. Peek Element"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter an element to push into the stack."<<endl;
            cin>>value;
            push(value);
            break;

            case 2:
            pop();
            break;

            case 3:
            value=peek();
            if(value != -1)
            cout<<value<<" is the top element of the stack."<<endl;
            break;

            case 4:
            exit(0);

            default:
            cout<<"Enter valid choice."<<endl;

        }
    }
    return 0;
}
