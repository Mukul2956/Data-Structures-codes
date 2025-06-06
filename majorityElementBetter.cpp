#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr,int n){
    map<int,int> mpp;
    for(int i = 0;i < n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {2,2,4,3,2};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int majEl = majorityElement(arr,n);
    cout << "Majority element in the array is " << " ";
    cout << majEl << endl;
    return 0;
}