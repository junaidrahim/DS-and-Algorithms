#include <iostream>
#include <stack>

using namespace std;

class Queue{
private:
    stack<int> s;
public:
    void enqueue(int j);
    int dequeue();
};

void Queue::enqueue(int j) {
    s.push(j);
}

int Queue::dequeue() {
    if(s.empty()){
        cout << "Queue is empty" << endl;
        exit(0);
    }

    int x = s.top();
    s.pop();

    if (s.empty())
        return x;

    int item = dequeue();

    s.push(x);

    return item;
}

int main(){
    Queue q; 
    q.enqueue(1); 
    q.enqueue(2); 
    q.enqueue(3); 
  
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 

    return 0;
}