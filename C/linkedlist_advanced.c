#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertNode(struct Node** head, int newData) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = *newData; // Intentional bug, should be `... = newData;`
    newNode->next = *head;
    *head = newNode;
}

// Function to delete a node with a given key from the linked list
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the key is present at the head
    if (temp != NULL && temp->data == key) {
        head = temp->next; // Intentional bug, should be: `*head`
        free(temp); 
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not present in the linked list
    if (temp == NULL) {
        printf("Key not found in the linked list\n");
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    // free(temp); // Intentional bug
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->NULL; // Intentional bug, should be: `node = node->next`
    }
    printf("NULL\n");
}

// Driver program to test the linked list functions
int main() {
    struct Node* head = NULL;

    // Insert some nodes
    insertNode(&head, 3);
    insertNode(&head, 7);
    insertNode(&head,12);
    insertNode(&head, 9);

    printf("Linked list before deletion:\n");
    printList(head);

    // Delete a node with key 7
    deleteNode(head, 7); // Intentional bug, should be: `deleteNode(&head, 7);`

    printf("Linked list after deletion:\n");
    printList(head);

    return 0;
}
