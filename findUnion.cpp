#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a,vector<int> &b){
    set<int> st;
    int n1 = a.size();
    int n2 = b.size();
    for(int i = 0;i < n1;i++){
        st.insert(a[i]);
    }
    for(int i = 0;i < n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(int i : st){
        temp.push_back(i);
    }
    return temp;
}
int main(){
    vector<int> a = {1,2,3,2,5,5};
    vector<int> b = {2,5,6,3,1};
    int n1 = a.size();
    int n2 = b.size();
    cout << "Array 1: " << " ";
    for(int i = 0;i < n1;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array 2: " << " ";
    for(int i = 0;i < n2;i++){
        cout << b[i] << " ";
    }
    cout << endl;
    vector<int> temp = findUnion(a,b);
    cout << "Union of both arrays: " << " ";
    for(int i = 0;i < temp.size();i++){
        cout << temp[i] << " ";
    }
    return 0;
}