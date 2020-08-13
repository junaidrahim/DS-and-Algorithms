// Reverse a Linked List

#include <iostream>

using namespace std;

typedef struct NODE_S {
	struct NODE_S* next;
	int data;
} node;

node* create_list(int len){
	node *HEAD = new node;
	node* curr = HEAD;

	for(int i=0; i<len; i++){
		if(i != len-1)
			curr->next = new node;
		else
			curr->next = nullptr;
		
		curr->data = i;
		curr = curr->next;
	}

	return HEAD;
}

node* reverse(node* head){
	node *prev = nullptr;
	node *curr = head;
	node *nxt = nullptr;

	while(curr != nullptr){
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}

	return prev;
}

ostream& operator<<(ostream& stream, node *head){
	node *curr = head;

	while(curr != nullptr)	{
		stream << curr->data << "->";
		curr = curr->next;
	}

	stream << "null";

	return stream;
}


int main(){
	node* h = create_list(10);
	cout << h << endl;

	node* r = reverse(h);
	cout << r << endl;

	return 0;
}