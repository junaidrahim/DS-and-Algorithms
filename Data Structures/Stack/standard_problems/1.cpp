// Infix to Postfix Conversion

#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Precedence
int precedence(char c){
    if(c == '^')
        return 3;
    else if (c=='*' || c == '/')
        return 2;
    else if (c=='+' || c == '-')
        return 1;
    else return -1;
}

string infix_to_postfix(string input){
    stack<char> st;
    string postfix;

    st.push('~');

    for(char s: input){

        if(isalpha(s)){
            postfix.push_back(s);
        }
        
        else if (s=='(')
            st.push(s);
        
        else if (s==')') {
            while (st.top() != '~' && st.top() != '('){
                postfix.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        
        else { // If its an operator
            while(st.top() != '~' && precedence(s) <= precedence(st.top())){
                postfix.push_back(st.top());
                st.pop();
            }
            st.push(s);
        }
    }

    while(st.top() != '~'){
        postfix.push_back(st.top());
        st.pop();
    }

    return postfix;
}

int main(){
    cout << infix_to_postfix("a+b*(c^d-e)^(f+g*h)-i") << endl;
    return 0;
}