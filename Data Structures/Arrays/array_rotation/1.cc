// Array rotation

#include <iostream>

using namespace std;

void rotate(int arr[],  int size, int d){
    int temp[d];
    
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    
    int r_arr[size];
    
    for(int i=d; i<size; i++){
        r_arr[i-d] = arr[i];
    }

    int k=0;

    for(int i=size-d; i<size; i++, k++){
        r_arr[i] = temp[k];
    }

    for(int a: r_arr){
        cout << a << ' ';
    }
}

// The bubble sorty method to rotate
void rotate2(int arr[], int size, int d) {
    for(int i=0; i<d; i++){
        int t = arr[0];
        cout << t << endl;

        for(int i=1; i<size; i++){
            arr[i-1] = arr[i];
        }

        arr[size-1] = t;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << ' ';
    }
}

int main(){
    int a[12] {1,2,3,4,5,6};
    rotate2(a, 6, 2);

    return 0;
}