#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	int n;
	cin >> n;

	int64_t arr[n];

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	vector<int64_t> final_arr(2*n);

	for(int i=0; i<n; ++i){
		if(i%2 == 0){
			final_arr[(n/2) + (i/2)] = arr[i];
			final_arr[(n/2) + (i/2)+ n] = arr[i];
		} else {
			final_arr[i/2] = arr[i];
			final_arr[i/2 + n] = arr[i];
		}
	}

	int k = (n+1)/2;

	int64_t max_sum = 0;
	int64_t sum = 0;
	
	for(auto i=final_arr.begin(); i<final_arr.end()-k; ++i){
		sum = accumulate(i, i+k, 0);

		if(sum > max_sum)
			max_sum = sum;
	}

	cout << max_sum;
	
}
