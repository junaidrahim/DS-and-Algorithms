// Deleting a node in a linked list

#include <iostream>

using namespace std;

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

void deleteNodeWithKey(node *head, int key) {
    node *curr = head;
    node *prev;

    if(curr->data == key) {
        delete curr;
        return;
    }

    while(curr != NULL && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;
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

    deleteNodeWithKey(a, 1);
    cout << a->next->data << endl;

    return 0;
}