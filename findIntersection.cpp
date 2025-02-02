#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &a,vector<int> &b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int n1 = a.size();
    int n2 = b.size();
    vector<int> temp;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(a[i] == b[j]){
            temp.push_back(a[i]);
        }
        i++;
        j++;
    }
    return temp;
}
int main(){
    vector<int> a = {1,1,5,2,3,6,3};
    vector<int> b = {2,3,6,1};
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
    vector<int> temp = findIntersection(a,b);
    cout << "Intersection of both arrays: " << " ";
    for(int i = 0;i < temp.size();i++){
        cout << temp[i] << " ";
    }
    cout << endl;
    return 0;
}