#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	int n = 0;
	cin >> n;

	vector<int> parties(n);
	
	for(int i=0; i<n; i++){
		cin >> parties[i];
	}

	int s = accumulate(parties.begin(), parties.end(), 0);

	vector<int> coalition = { 1 };
	int c_sum = parties[0];

	if(c_sum > s/2) {
		cout << 1 << '\n' << 1;
		return 0;
	}
	
	for(int i=1; i<n; ++i){
		if(parties[0] >= parties[i]*2){
			coalition.push_back(i+1);
			c_sum += parties[i];
		}

		if(c_sum > s/2)
			break;
	}

	if(c_sum <= s/2){
		cout << 0;
		return 0;
	}

	if(coalition.size() == 1)
		cout << 0;
	else {
		cout << coalition.size() << '\n';
	
		for(int i: coalition)
			cout << i << ' ';
	}
	
	
	return 0;
}
