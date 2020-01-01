// Basic Linked List

#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int main(){
    Node *a = new Node();
    Node *b = new Node();
    Node *c = new Node();

    a->next = b;
    b->next = c;
    c->next = NULL;

    return 0;
}