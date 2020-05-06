#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool isVowel(char a){
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y')
		return true;
	else
		return false;
}

int main(){
	string s;
	cin >> s;

	string answer;

	for(char i: s){
		char t = tolower(i);
		
		if(!isVowel(t)){
			answer.push_back('.');
			answer.push_back(t);
		}
			
	}
	

	cout << answer;

	
	return 0;
}
