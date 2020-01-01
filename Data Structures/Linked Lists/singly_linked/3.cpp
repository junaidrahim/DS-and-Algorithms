// Inserting a Node in a Linked List
// 1. At the Start
// 2. After a particular node
// 3. At the end

#include <iostream>

using namespace std;

typedef struct NODE {
    int data;
    struct NODE *next;
} node;


void insertAtHead(node **head, int data) {
    node *new_head = new node();
    new_head->data = data;
    new_head->next = *head;

    *head = new_head;
}

void insertAfter(node *prev_node, int data){
    node *new_node = new node;

    new_node->data = data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void insertAtEnd(node *head, int data) {
    node *curr = head;

    while(curr->next != NULL) {
        curr = curr->next;
    }

    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;

    curr->next = new_node;
}

int main(){
    node *a = new node;
    node *b = new node;
    node *c = new node;

    a->data = 1;
    a->next = b;

    b->data = 2;
    b->next = c;

    c->data = 3;
    c->next = NULL;

    cout << a->data << endl;
    insertAtHead(&a, 10);
    cout << a->data << endl;

    cout << endl;

    cout << b->next->data << endl;
    insertAfter(b, 100);
    cout << b->next->data << endl;

    cout << endl;

    cout << c->next << endl;
    insertAtEnd(a, 200);
    cout << c->next->data << endl;

    return 0;
}