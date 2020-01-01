// Write a function to delete a linked list

#include <iostream>

using namespace std;

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

void deleteList(node **head) {
    node *curr = *head;
    node *next;

    while(curr != NULL) {
        next = curr->next;
        delete curr;
        curr = next;
    }
}

int main(){
    node *a = new node;
    node *b = new node;
    node *c = new node;
    node *d = new node;

    a->data = 10;
    a->next = b;

    b->data = 20;
    b->next = c;

    c->data = 30;
    c->next = d;

    d->data = 40;
    d->next = NULL;

    deleteList(&a);

    cout << a->data << endl;

    return 0;
}