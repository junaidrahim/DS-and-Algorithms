#include <iostream>

using namespace std;

int main(){
	long long int n,k;
	cin >> n >> k;

	cout << n + k - (n % k);

	return 0;
}
