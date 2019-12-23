// Given a sorted and rotated array, find if there is a pair with a given sum
#include <iostream>
#include <vector>

using namespace std;

vector<int> findPair (vector<int> arr, int sum) {
    vector<int> ans;
    int pivot = -1;
    
    // Find the pivot
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            pivot = i+1;
            break;
        }
    }

    

    return ans;
}

int main(){


    return 0;
}