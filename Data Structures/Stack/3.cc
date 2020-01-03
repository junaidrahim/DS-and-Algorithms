// Implementation of 2 stacks using a single array

#include <iostream>

using namespace std;

class TwoStacks{
private:
    int *stack_arr;
    int size;
    int s_index1;
    int s_index2;

public:
    TwoStacks(int size);
    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();
};

TwoStacks::TwoStacks(int size){
    
}

int main(){

    return 0;
}