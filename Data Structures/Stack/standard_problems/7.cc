// Next Greater Element in array

// Given an array, for every element, pick the next greater element to its right,
// Naive Solution => Use two loops
// Better Solution => Use stacks

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void next_greater_element(vector<int> arr){
	stack<int> s;

	s.push(arr[0]);

	for(long unsigned int i=1; i<arr.size(); i++){
		while (arr[i] > s.top()) {
			cout << s.top() << "->" << arr[i] << endl;
			s.pop();

			if(s.size() == 0)
				break;
		}
		
		s.push(arr[i]);
	}

	while(s.size()){
		cout << s.top() << "->" << -1 << endl;
		s.pop();
	}
}

int main(){
	vector<int> in = {6,7,2,8,9};
	next_greater_element(in);
	
	return 0;
}
