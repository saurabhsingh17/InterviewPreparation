//
// Created by Maruti on 24-Mar-22.
//

#include "SinglyLinkedList.h"
#include<iostream>
#include<map>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data) {
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    Node* temp=new Node(data);
    Node* current=head,prev=NULL;

    if(position==1)
        insertAtHead(head,data);
    int cnt=1;
    while(cnt<position){
        cnt++;
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
    if(current->next->next==NULL)
        tail=temp;
}
void deleteAtPosition(int position,Node* &head){
    Node* temp=head;
    if(position==1){

        cout<<temp->next->data<<endl;
        head=head->next;
        temp->next=NULL;
        delete temp;
        cout<<temp->next->data<<endl;
        return;
    }

}
void print(Node *&head) {
    if (head == NULL) {
        cout << " No nodes found !! " << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 155);
    print(head);
    insertAtTail(tail, 1551);
    print(head);
    insertAtTail(tail, 1557);
    print(head);
    insertAtPosition(head,tail,2,5);
    print(head);
    cout<<tail->data<<endl;
    deleteAtPosition(1,head);
    print(head);
    return 0;
}