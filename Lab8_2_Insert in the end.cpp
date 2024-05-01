#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

void ShowVal(Node *ptr){
	while(ptr != NULL){
		cout<<ptr->data<< " ";
		ptr = ptr ->next;
	}
	cout<<endl;
}

//insert last function

void InsertVal(Node *ptr, Node *ToInsert){
	while(ptr != NULL){
	ptr = ptr->next;
		if(ptr->next == NULL)
		{
			ptr->next = ToInsert;
			break;
		}
	}
}

int main() { 	// main function start here
	struct Node  *head,  *first,  *second,  *third,  *forth, *fifth, *Insert;

	// Locating in Memory..
	head = new Node;
	first = new Node;
	second = new Node;
	third = new Node;
	forth = new Node;
	fifth = new Node;
	Insert = new Node;
	
	// linking nodes
	head->data = 12;
	head->next = first;

	first->data = 54;
	first->next = second;
	
	second->data = 65;
	second->next = fifth;

	third->data = 23;
	third->next = forth;

	fifth->data = 46;
	fifth->next = forth;

	forth->data = 34;
	forth -> next = NULL;
	
	cout<<"Before Inserting: ";
	ShowVal(head);

	// Insert new Node
	cout<<"Enter a number to insert: ";
	cin>> Insert->data;
	Insert->next = NULL;
	
	InsertVal(head, Insert);
	
	cout<<"After Inserting: ";
	ShowVal(head);
	
 	return 0;
}
