// Code with string output

#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string s){
    int n = s.size();
    for(int i = n-1;i >= 0;i--){
        if((s[i] - '0') % 2 == 1){  // conversion to integer type (as character values are stored in ASCII, hence it is recommended to typecast)
            return s.substr(0,i+1); //return the substring from start to this position
        }
    }
    return "";
}
int main(){
    string s;
    cin >> s;
    string result = largestOddNumber(s);
    cout << result;
    return 0;
}

// Code with integer output (easy)
/*
#include<bits/stdc++.h>
using namespace std;

int largestOddNumber(string s){
    if(s.empty()){
        return -1;
    }
    int largest = -1;
    for(char c : s){
        int num = c - '0';
        if(num % 2 == 1){
            largest = max(largest,num);
        }
    }
    return largest;
}
int main(){
    string s = "52";
    int result = largestOddNumber(s);
    cout << result;
    return 0;
}
*/