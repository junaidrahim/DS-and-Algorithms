// Implementing Queue using stacks

#include <iostream>
#include <stack>

using namespace std;

class Queue{
private:
    stack<int> s1, s2;

public:
    void enque(int j);
    int deque();
};

void Queue::enque(int j) {
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(j);

    while(!s2.empty()) {  
        s1.push(s2.top());
        s2.pop();
    }
}

int Queue::deque() {
    if(s1.empty()) {
        cout << "Queue is empty" << endl;
    }

    int x = s1.top();
    s1.pop();
    return x;
}


int main(){
    Queue q;

    q.enque(1);
    q.enque(2);
    q.enque(3);

    cout << q.deque() << endl;
    cout << q.deque() << endl;

    return 0;
}