#include <iostream>

struct Node {
    int data;
    Node* next;
};

void deleteFirstNode(Node* &head) {
    // Check if the list is empty
    if (head == nullptr) {
        std::cout << "List is empty. Nothing to delete." << std::endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}

// Function to print the linked list
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

    Node* head = new Node;
    head->data = 5;

    // Insert more nodes
    Node* second = new Node;
    second->data = 10;
    head->next = second;

    Node* third = new Node;
    third->data = 15;
    second->next = third;
    third->next = nullptr;

    std::cout << "Original linked list: ";
    printList(head);

    deleteFirstNode(head);

    std::cout << "Linked list after deletion: ";
    printList(head);

    return 0;
}
