// Delete node at in index

#include <iostream>

using namespace std;

typedef struct NODE {
    int data;
    struct NODE *next;
} node;


void deleteAtIndex(node **head, int index) {
    node *curr = *head;
    node *prev;

    for(int i=0; i<index; i++){
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
    node *d = new node;

    a->data = 10;
    a->next = b;

    b->data = 20;
    b->next = c;

    c->data = 30;
    c->next = d;

    d->data = 40;
    d->next = NULL;

    deleteAtIndex(&a,2);
    cout << b->next->data << endl;


    return 0;
}