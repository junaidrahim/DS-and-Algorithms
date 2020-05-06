#include <iostream>
#include <array>

using namespace std;


bool isDistinct(int year){
	array<int, 10> t = {0};

	while(year != 0){
		int l = year % 10;

		if(t[l] != 0)
			return false;
		else
			t[l] = 1;
 
		year = year / 10;
	}

	return true;
}


int main(){
	int n, k;
	
	cin >> n;

	k = n+1;
	
	while(!isDistinct(k))
		k++;

	cout << k;
	
	return 0;
}

