#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
	// Write your code here.
	int left = 0,right = str.size()-1;
	string temp = "",ans = "";
    while (left <= right && str[left] == ' ') { // skip spaces before the first word and allow only one space after each word by moving left pointer forward in both cases
        left++;
    }
	while(left <= right){
		char ch = str[left];
		if(ch != ' '){ // if space is not there
			temp += ch; // add that character to temp
		}
		else if(ch == ' '){ // if space comes, it means a word is completed
			if(ans != ""){ // if ans is not empty
				ans = temp + " " + ans; // add temp at front then a space and then remaining of ans, so the string gets reversed
			}
			else{ // if ans is empty
				ans += temp; // simply add temp to it
			}
			temp = ""; // reset temp to check for remaining characters (only after adding a word to ans, not at every iteration)
		}
		left++; // move to next character
	}
	//Handling last word( since it doesn,t end with space)
	if(temp != ""){ // check if temp is left with any characters
		if(ans != ""){ // if ans is not empty
			ans = temp + " " + ans; // add temp at front then a space and then remaining of ans, so the string gets reversed
		}
		else{ // if ans is empty
			ans += temp; // simply add temp to it
		}
	}
	return ans;	// return the final reversed string
}
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Take input and Read full line (including spaces)
    string result = reverseString(str);
    cout << "Reversed string: " << result << " ";
    return 0;
}

// Note: Use getline(cin,str) function when taking input of a string with spaces