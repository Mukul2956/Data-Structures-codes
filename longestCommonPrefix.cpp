#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs){
    string result = "";
    sort(strs.begin(), strs.end());
    string firstWord = strs[0], lastWord = strs[strs.size()-1];

    for(int i = 0;i < min(firstWord.size(), lastWord.size());i++){
        if(firstWord[i] == lastWord[i]){
            result += firstWord[i];
        }
        else{
            break;
        }
    }
    return result;
}
int main(){
    vector<string> strs;
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    for(int i = 0;i < n;i++){
        string words;
        cout << "Enter word " << i + 1 << ": ";
        cin >> words;
        strs.push_back(words);
    }
    string output = longestCommonPrefix(strs);
    cout << "Longest common prefix in these words is: " << output;
    return 0;
}