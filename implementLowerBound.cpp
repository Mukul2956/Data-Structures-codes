#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr,int target,int n){
    int ans = n;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {2,3,4,5,5,7,8};
    int n = arr.size();
    int lowerBoundIndex = lowerBound(arr,6,n);
    cout << lowerBoundIndex;
    return 0;
}