#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr,int target){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {3,4,5,6,9,11,13};
    int n = arr.size();
    cout << "Array: " << " ";
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << search(arr,4);
    return 0;
}