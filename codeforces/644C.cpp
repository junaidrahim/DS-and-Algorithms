#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i=0; i<t; ++i){
		int n;
		cin >> n;
		
		int arr[n];

		int e=0, o=0;
		
		for(int j=0; j<n; j++){
			cin >> arr[j];

			if(arr[j] % 2 == 0)
				e++;
			else
				o++;
		}

		
		if(e%2==0 && o%2==0)
			cout << "YES\n";
		else if (e%2==1 && o%2==1) {
			int flag = 0;
			
			for(int j=0; j<n; j++){
				for(int k=j; k<n; k++){
					if(abs(arr[k] - arr[j]) == 1){
						flag = 1;
						break;
					}
				}
				if(flag)
					break;
			}

			if(flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}		
	}

	return 0;
}
