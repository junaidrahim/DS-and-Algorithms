#include <iostream>

using namespace std;

constexpr int factorial(int n){
    int k = 10;
    for(int i=0; i<10; i++)
        k+= i;
    //return (n>1) ? n*factorial(n-1) : 1;
    return k;
}

int main(){
    constexpr int k = factorial(6);
    cout << k << endl;
    
    return 0;
}