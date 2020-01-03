#include <iostream>

using namespace std;

class Box {
public:
    virtual void print(){
        cout << "I am the base class" << endl;
    }

    int give(){
        return 100;
    }
};

class SpecialBox : public Box {
public:
    void print(){
        cout << "I am special box" << endl;
    }

    int give(){
        return 200;
    }
};

int main(){
    Box* boxptr;
    SpecialBox splbox;
    boxptr = &splbox;

    boxptr->print();
    cout << boxptr->give() << endl;


    return 0;
}