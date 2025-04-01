#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s,string goal){
    if(s.size() != goal.size()){
        return false;
    }
    string temp = s + s; //concatenate s with itself so you can get all rotations of s in temp.
    return temp.find(goal) != string::npos; //temp.find(goal) gives the starting index of goal in temp if goal is found. Else it gives -1 which is converted to false(boolean) by string::npos
}
int main(){
    string s = "abcde";
    string goal = "cdeab";
    cout << rotateString(s,goal);
    return 0;
}