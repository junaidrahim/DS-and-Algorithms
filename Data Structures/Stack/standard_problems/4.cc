// Postfix to Prefix Conversion

#include <iostream>
#include <stack>
#include <string>
#include <ctype.h>
#include <algorithm>

using namespace std;

string postfix_to_prefix(string in) {
	stack<string> s;
	string answer;
	
	for(string::iterator c = in.begin(); c<in.end(); c++){
		if(isalpha(*c)){
			s.push(string{*c});
		} else {
			string t1 = s.top();
			s.pop();

			string t2 = s.top();
			s.pop();

			s.push(t1 + t2 + string{*c});
		}
	}

	answer = s.top();
	reverse(answer.begin(), answer.end());
	
	return answer;
}


int main(){
	string in = "ABC/-AK/L-*";
	cout  << postfix_to_prefix(in) << endl;
	
	return 0;
}


