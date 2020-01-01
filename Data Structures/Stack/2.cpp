#include <iostream>
#include <stack>

using namespace std;

class SpecialStack{
private:
    stack<int> main, aux;

public:
    void push(int x);
    void pop();
    int top();
    int getMin();
};


void SpecialStack::push(int x){
    if (main.empty()) {
        main.push(x);
        aux.push(x);
    } 
    else {
        int k = aux.top();

        if(x < k){
            main.push(x);
            aux.push(x);
        } else {
            main.push(x);
            aux.push(k);
        }
    }
}

void SpecialStack::pop(){
    main.pop();
    aux.pop();
}

int SpecialStack::top() {
    return main.top();
}

int SpecialStack::getMin(){
    return aux.top();
}

int main(){
    SpecialStack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 

    cout<<s.getMin()<<endl; 
    
    s.push(5); 
    
    cout<<s.getMin(); 
    return 0;
}