#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

int getSize(Node* head) {
    if (head == nullptr) {
        return 0;  
    }

    int count = 1;  
    Node* temp = head->next;  

    while (temp != head) {
        count++;
        temp = temp->next;
    }

    return count;
}


void insertEnd(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;

    if (head == nullptr) {
        
        head = newNode;
        head->next = head;
        head->prev = head;
    } else {
        Node* last = head->prev;  
        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode;
    }
}

int main() {
    Node* head = nullptr;
    
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    
    cout << "Size of the doubly circular linked list: " << getSize(head) << endl;

    return 0;
}
