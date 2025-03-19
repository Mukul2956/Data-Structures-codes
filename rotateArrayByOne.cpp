#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i = 1;i < n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    
    cout << "Original Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    rotateArray(arr,n);
    
    cout << "Rotated Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}