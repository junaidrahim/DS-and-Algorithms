// Design a stack with operations on middle element
// Problems faced - core dumped issue on node delete.


#include <iostream>

using namespace std;

typedef struct NODE_S {
    int data;
    struct NODE_S *prev;
    struct NODE_S *next;
} node;

class List{
public:
    node *head = new node;
    node **curr;

    List(int d);
    void addNode(int data);
    void deleteNode();
};

List::List(int d){
    head->data = d;
    head->prev = nullptr;
    head->next = nullptr;
    curr = &head;
}

void List::addNode(int data){
    node* t = new node;
    t->data = data;
    t->prev = *curr;
    t->next = nullptr;
    
    (*curr)->next = t;
    curr = &t;
}


void List::deleteNode(){
    node *k = *curr;
    curr = &((*curr)->prev);
    cout << k->data << endl;
}


class MidStack{
public:
    int push_count = 0;
    node *middle;
    List *stack;

    MidStack(int d);
    void push(int x);
    void pop();
    int findMiddle();
    void deleteMiddle();
};

MidStack::MidStack(int d){
    *stack = List(d);
    middle = *(stack->curr);
}

void MidStack::push(int x){
    stack->addNode(x);
    ++push_count;

    if(push_count == 2){
        middle = middle->next;
        push_count = 0;
    }
}



int main(){

    List a(10);
    a.addNode(20);
    a.addNode(30);
    cout << (*a.curr)->data << endl;
    a.deleteNode();

    return 0;
}