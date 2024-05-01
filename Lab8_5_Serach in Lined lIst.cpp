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

// Function to search for an element in the linked list
bool searchElement(Node* head, int target) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            return true; // Element found
        }
        current = current->next;
    }
    return false; // Element not found
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

    // Search for an element in the linked list
    int target = 3;
    if (searchElement(head, target)) {
        std::cout << "Element " << target << " found in the linked list." << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the linked list." << std::endl;
    }

    return 0;
}