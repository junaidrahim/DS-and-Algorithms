#include <iostream>

using namespace std;

int main(){
	int64_t n;
	cin >> n;

	for(int64_t i=0; i<n; i++){
		uint64_t k;
		cin >> k;

		int divisors = 0;
		
		for(uint64_t j=2; j<k; j++){
			cout << j << endl;
			if(k%j == 0)
				divisors++;

			if(divisors>1)
				break;
		}

		if(divisors == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	

}
