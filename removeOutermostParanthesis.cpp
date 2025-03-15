#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    string res;
    int count=0;
    for(char c : s)
        if(c == '(' && ++count > 1) // increment count by 1 ( count++ ) when '(' comes, then if it is greater than 1, add it to res, else don't add
            res += c;
        else if(c == ')' && --count > 0) // decrement count by 1 ( count-- ) when ')' comes, then if it is greater than 0, add it to res, else don't add
            res += c;
    return res;
}
int main() {
    string s;
    cout << "Enter a valid parentheses string: ";
    cin >> s;
    string result = removeOuterParentheses(s);
    cout << "Output after removing outer parentheses: " << result << endl;
    return 0;
}

// have a photo of dry run(ez understandable) in phone