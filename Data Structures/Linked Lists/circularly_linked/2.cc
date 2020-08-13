#include <iostream>

using namespace std;

class CircularLinkedList {
private:
	CircularLinkedList *next;
	int data;
public:
	CircularLinkedList(int d);
	void insert(int data);
	void print();
	void at();
};

CircularLinkedList::CircularLinkedList(int d){
	CircularLinkedList::data = d;
	CircularLinkedList::next = nullptr;
}

void CircularLinkedList::insert(int data) {

}

void CircularLinkedList::print() {
	CircularLinkedList *current = static_cast<CircularLinkedList*>(this);
	CircularLinkedList *n = current->next;

	while(n != current) {
		cout << n->data; << end;		
		n = n->next;
	}
}







int main(){


	return 0;
}
