#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	cout << "Enter size of arr: ";
	cin >> n;

	int arr[n];
	cout << "Enter Array: ";

	for(int i=0; i<n; i++)
		cin >> arr[i];

	bool flag = true; // true for even; false for odd

	for(int index=0; index<n; index++){
		for(int i=index; i<n; i++){
			if(flag){
				if(arr[i] % 2 == 0){
					swap(&arr[index], &arr[i]);
					break;
				}
			}
			if(!flag){
				if(arr[i] % 2 == 1){
					swap(&arr[index], &arr[i]);
					break;
				}
			}
		}

		flag = !flag;
	}

	for(int i=0; i<n; i++)
		cout << arr[i] << ' ';


	return 0;
}