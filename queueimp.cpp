#include<iostream>
#define MAX 5
using namespace std;

int head=0;
int rear=0;

int queue[MAX];

int isFull(){
    return (head==0 && rear==MAX-1);
}

int isEmpty(){
    return (head==0 && rear==0);
}

void enqueue(int value){
    if(isFull()){
        cout<<"Queue is full. No more elements can be enqueued."<<endl;
    }

    else{
        rear++;
        queue[rear]=value;
        cout<<value<<" is enqueued into the queue."<<endl;
    }
}

int dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty. No more elements can be dequeued."<<endl;
        return -1;
    }

    else{
        int dequeuedValue=queue[head];
        head++;
        cout<<dequeuedValue<<" is dequeued from the queue."<<endl;
        return dequeuedValue;
    }
}

int main(){
    int choice, value;
    while(1){
        cout<<"Enter the valid choice."<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter the element to enqueue"
        }
    }
    return 0;
}


