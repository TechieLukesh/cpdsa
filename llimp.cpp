#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class SinglyLinkedList{
    private:
    Node* head;

    public:
    SinglyLinkedList(){
        head=nullptr;
    }

    void insertAtBeginning(int value){
        Node* newNode=new Node();

        newNode->data=value;
        newNode->next=head;
        head=newNode;
    }

    void insertAtEnd(int value){
        Node* newNode=new Node();
        newNode->data=value;
        newNode->next=nullptr;
        if(head==nullptr){
            head=newNode;
        }
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }

    void deleteByValue(int value){
        if(head==nullptr){
            cout<<"Nothing to delete in list."<<endl;
            return;
        }

        if(head->data==value){
            Node* temp=head;
            head=head->next;
            delete temp;
            cout<<value<<" is deleted."<<endl;
            return;
        }


        Node* temp=head;
        Node* prev=nullptr;
        while(temp!=nullptr&&temp->data!=value){
            prev=temp;
            temp=temp->next;
        }

      if(temp==nullptr){
        cout<<"No element found."<<endl;
        return;
      }


        prev->next=temp->next;
        delete temp;
        cout<<value<<" is deleted."<<endl;
    }

    void display(){
        if(head==nullptr){
            cout<<"Nothing to print."<<endl;
            return;
        }
        Node* temp=head;
        cout<<"Linked List."<<endl;
        while(temp->next!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    SinglyLinkedList list;
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display();

    list.deleteByValue(20);
    list.display();

    list.deleteByValue(50); // Trying to delete a non-existent value
    list.display();
    return 0;
}