#include <iostream>

using namespace std;


int main(){
	int t;
	cin >> t;

	for(int tt=0; tt<t; tt++){
		int n;
		cin >> n;

		if(n%2 == 0)
			cout << n/2 << ' ' << n/2 << '\n';
		else {
			int a = (int) n/2;
			int b = a+1;

			bool flag = true;
			
			for(; a>0; b++, a--){
				if(b%a == 0){
					cout << a << ' ' << b << '\n';
					flag = false;
					break;
				}
			}

			if(flag)
				cout << n-1 << ' ' << 1 << '\n';
		}
	}
	
	return 0;
}
