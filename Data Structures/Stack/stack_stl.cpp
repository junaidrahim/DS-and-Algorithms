#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> p;
    
    p.push(10);
    p.push(20);
    p.pop();

    cout << p.top() << endl;

    return 0;
}
