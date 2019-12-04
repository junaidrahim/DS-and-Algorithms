#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a(10,3000);
    
    for(int k: a){
        cout << k << endl;
    }

    return 0;
}