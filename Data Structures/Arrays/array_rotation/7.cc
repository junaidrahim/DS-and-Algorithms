// Find maximum value of Sum(i*arr[i]) with only rotations on given array allowed
#include <iostream>

using namespace std;

void reverse(int *arr, int start, int end){
    while(start < end){
        int t = *(arr+start);
        *(arr+start) = *(arr+end);
        *(arr+end) = t;

        start++;
        end--;
    }
}

void rotateOnce(int *arr, int size){
    reverse(arr, 0, size-1);
    reverse(arr, 0, size-2);
}

int findSum(int *arr, int size){
    int sum = 0;
    
    for(int i=0; i<size; i++)
        sum += i*(*(arr+i));
    
    return sum;
}

// Naive Solution -> O(n^2)
int naiveFindMaxSum(int *arr, int size) {
    int sum = findSum(arr, size);

    for(int i=0; i<size; i++){
        rotateOnce(arr, size);
        int s = findSum(arr, size);
    
        if(s > sum)
            sum = s;
    }

    return sum;
}

// Smart Solution => Derive a formula for the sum of the jth rotation -> O(n)

int smartFindMaxSum(int *arr, int size){
    int arrSum = 0;

    for(int i=0; i<size; i++){
        arrSum += arr[i];
    }

    int curr_sum = findSum(arr, size);
    
    int max_sum = curr_sum;

    for (int i=1; i<size-1; i++) {
        curr_sum += arrSum - (size*arr[size-i]);
        if (curr_sum > max_sum)
            max_sum = curr_sum;
    }

    return max_sum;
}

int main(){
    int arr[10] {1,2,3,4,5,6,7,8,9,10};
    cout << smartFindMaxSum(arr, 10) << endl;
    cout << naiveFindMaxSum(arr, 10) << endl;

    return 0;
}