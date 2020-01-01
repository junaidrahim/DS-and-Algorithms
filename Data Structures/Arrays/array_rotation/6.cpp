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

    int max_index = pivot - 1;
    int min_index = pivot;

    while(min_index != max_index){
        int s = arr[min_index] + arr[max_index];

        if(s == sum){
            ans.push_back(arr[min_index]);
            ans.push_back(arr[max_index]);
            break;
        }

        if (s < sum) {
            min_index = (++min_index) % arr.size();
                        
        } else {
            max_index = (arr.size()-1 + max_index) % arr.size();
        }
    }

    return ans;
}

int main(){

    vector<int> a {7,8,9,10,11,12,13,14,4,5,6};
    vector<int> p = findPair(a, 24);

    cout << p[0] << ' ' << p[1] << endl;

    return 0;
}