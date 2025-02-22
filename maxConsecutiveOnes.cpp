#include<bits/stdc++.h>
using namespace std;

int maxConOnes(vector<int> &arr,int n){
    int count = 0;
    int maxOne = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == 1){
            count++;
            maxOne = max(maxOne,count);
        }
        else{
            count = 0;
        }
    }
    return maxOne;
}
int main(){
    vector<int> arr = {1,1,0,1,1,1,0,1,1};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxOne = maxConOnes(arr,n);
    cout << "Maximum consecutive ones: " << " ";
    cout << maxOne << endl;
    return 0;
}