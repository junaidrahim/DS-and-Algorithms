#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i=0; i<t; ++i){
		int64_t n,k;

		cin >> n >> k;

		for(int64_t j=k; j>=1; j--){
			if(n%j == 0){
				cout << n/j << '\n';
				break;
			}
		}
	}

	return 0;
}
