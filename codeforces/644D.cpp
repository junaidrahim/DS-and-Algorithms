#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i=0; i<t; ++i){
		int64_t n,k;

		cin >> n >> k;

		int64_t ans = n;
		
		for(int64_t j=1; j*j<=n; j++){
			if(n % j == 0){
				if(j <= k)
					ans = min(ans, n/j);

				if(n/j <= k)
					ans = min(ans, j);
			}
		}

		cout << ans << '\n';
	}

	return 0;
}

