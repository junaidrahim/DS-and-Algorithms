// Search an element in a sorted rotated array
#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> arr, int start, int end, int element) {
    int mid = (start + end) / 2;
    
    // Doesn't work for terms at the end
    while ((mid < end) && (mid > start)) {
        if(arr[mid] == element)
            return mid;

        if(arr[mid] < element) {
            mid = (mid + 1 + end) / 2;
        } else {
            mid = (start + mid - 1) / 2;
        }
    }

    return -1;
}


int main(){
    vector<int> a {4,5,7,1,2,3};
    
    int pivot = -1;

    for(int i=0; i<a.size()-1; i++){
        if(a[i] > a[i+1]){
            pivot = i+1;
            break;
        }
    }

    if(pivot != -1){
        int l = binary_search(a, 0, pivot - 1, 2);
        
        if (l == -1) {
            int r = binary_search(a, pivot, a.size() - 1, 2);
            if (r == -1)
                cout << "not found" << endl;
            else
                cout << r << endl;
        } else {
            cout << l << endl;
        }
    }

    return 0;
}