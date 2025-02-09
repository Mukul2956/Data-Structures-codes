#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &arr,int n){
    for(int i = 0;i < n;i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr = {2,7,3,1,6,9};
    int n = arr.size();
    cout << isSorted(arr,n);
    return 0;
}