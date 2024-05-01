#include <iostream>

// Define the structure of a node
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the linked list
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node at the middle of the linked list
void deleteAtMiddle(Node* &head) {
    // Check if the list is empty
    if (head == nullptr) {
        std::cout << "List is empty. Nothing to delete." << std::endl;
        return;
    }

    Node* slowPtr = head;
    Node* fastPtr = head;
    Node* prev = nullptr;

    // Traverse the list to find the middle node
    while (fastPtr != nullptr && fastPtr->next != nullptr) {
        prev = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    // Delete the middle node
    if (prev != nullptr) {
        prev->next = slowPtr->next;
    } else {
        // If prev is nullptr, it means the head itself is the middle node
        head = head->next;
    }
    delete slowPtr;
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
    // Initialize an empty linked list
    Node* head = nullptr;

    // Insert elements into the linked list
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    // Print the original linked list
    std::cout << "Original linked list: ";
    printList(head);

    // Delete the middle element
    deleteAtMiddle(head);

    // Print the updated linked list
    std::cout << "Linked list after deletion at middle: ";
    printList(head);

    return 0;
}
