#include <iostream>

struct Node {
    int data;
    Node* next;
};


void insertAtStart(Node* &head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Main function
int main() {
    Node* head = nullptr;
    insertAtStart(head, 5);
    insertAtStart(head, 10);
    insertAtStart(head, 15);

    std::cout << "Linked list after insertion: ";
    printList(head);

    return 0;
}
