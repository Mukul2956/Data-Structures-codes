#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>&arr,int n){
    int low = 0, high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        else{
            if(arr[mid] < ans){
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}
int main(){
    vector<int>arr={7,8,1,2,3,4};
    int n = arr.size();
    int numOfRotations = findKRotation(arr,n);
    cout << numOfRotations;
    return 0;
}