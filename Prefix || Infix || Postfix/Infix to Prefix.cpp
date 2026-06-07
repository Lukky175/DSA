#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s) {
    int left = 0;
    int right = s.length() - 1;

    while (left <= right) {

        char l = s[left];
        char r = s[right];

        if (l == '(') l = ')';
        else if (l == ')') l = '(';

        if (r == '(') r = ')';
        else if (r == ')') r = '(';

        s[left] = r;
        s[right] = l;

        left++;
        right--;
    }
}

int priority(char i){
    if (i== '^') return 3;
    else if (i== '*' || i == '/') return 2;
    else if (i== '+' || i == '-') return 1;
    else return -1;
}

string infixToPrefix(string exp){
	stack<char> st;
	string ans = "";
	reverseString(exp);
	for(int i =0;i<exp.size();i++){
	    if((exp[i]>= 'A' && exp[i]<='Z') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='0' && exp[i]<='9')) ans += exp[i];
	    else if(exp[i]=='(') st.push (exp[i]);
	    else if(exp[i]==')'){
	        while(!st.empty() && st.top() != '('){
	            ans += st.top();
	            st.pop();
	        }
	        st.pop();
	    }
	    else{
	        if(exp[i] == '^'){
	            while(!st.empty() && priority(exp[i])<=priority(st.top())){
	                ans+=st.top();
	                st.pop();
	            }
	        }else{
    	        while(!st.empty() && priority(exp[i])<priority(st.top())){
    	            ans+=st.top();
    	            st.pop();
    	        }
	        }
	        st.push(exp[i]);
	    }
	}
	while(!st.empty()){
	    ans+=st.top();
	    st.pop();
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
    string i = "a+b*(c^d-e)";
    string newi = infixToPrefix(i);
    cout << newi;

    return 0;
}
