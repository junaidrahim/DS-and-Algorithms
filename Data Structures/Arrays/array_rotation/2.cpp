#include <iostream>

using namespace std;

void reverse(int* arr, int start, int end){
    while(start<end){
        int t = *(arr+start);
        *(arr+start) = *(arr+end);
        *(arr+end) = t;

        ++start;
        --end;
    }
}

void rotate(int* arr, int size, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, size-1);
    reverse(arr, 0, size-1);
}

int main(){

    int a[10] {1,2,3,4,5,6,7,8,9,10};
    rotate(a, 10, 2);

    for(int i=0; i<10; i++)
        cout << a[i] << ' ';

    return 0;
}